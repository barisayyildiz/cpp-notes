#include <iostream>

using namespace std;

// Abstract Class
class Interface
{
public:
	// pure virtual function
	virtual string getName()const = 0;
};


class Parent : public Interface
{
public:
	virtual string getName()const { return "Parent";};
};

class Child : public Parent
{
public:
	virtual string getName()const { return "Child";};
};

// late binding
void printName(Interface* obj)
{
	cout << obj->getName() << endl;
}

int main()
{
	// late binding, if we are using pointers or references
	Parent p1;
	Child c1;

	// direct calls
	// works without virtual keyword
	cout << p1.getName() << endl;		// early binding	-> Parent
	cout << c1.getName() << endl;		// early binding	-> Child

	cout << "--------------" << endl;
	Interface* ip;

	ip = &p1;
	cout << ip->getName() << endl;	// late binding	-> Parent
	ip = &c1;
	cout << ip->getName() << endl;	// late binding	-> Child


	return 0;
}
