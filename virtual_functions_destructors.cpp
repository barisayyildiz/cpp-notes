#include <iostream>

using namespace std;

class Base
{
public:
	Base(){
		cout << "Base class constructor..." << endl;
	}
	virtual~Base(){
		cout << "Base class desctructor..." << endl;
	}
};

class Derived : public Base
{
public:
	Derived()// : Base() // even if we don't call Base class's constructor, it is called automatically
	{
		cout << "Derived class constructor..." << endl;
	}
	~Derived(){
		cout << "Derived class desctructor..." << endl;
	}
};

int main()
{
	// to properly delete derived class, we use virtual destructors...
	Base *d1 = new Derived;

	delete d1;
	// expected output:
	// Base class constructor...
	// Derived class constructor...
	// Derived class desctructor...
	// Base class desctructor...

	// without virtual desctructor, expected output:
	// Base class constructor...
	// Derived class constructor...
	// Base class desctructor...





	return 0;
}
