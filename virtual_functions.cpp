#include <iostream>

using namespace std;

class Parent
{
	public:
		virtual void print(){
			cout << "In base class" << endl;
		}
		// virtual void print()const = 0;
};


class Child : public Parent
{
	public:
		virtual void print(){
			cout << "In derived class" << endl;
		}
};


class Boy : public Child
{
public:
	virtual void print(){
		cout << "In boy class" << endl;
	}
};

void PrintFunction(Parent* p1)
{
	p1 -> print();
}

int main()
{
	Parent* p1 = new Parent;
	Child* c1 = new Child;
	Boy* b1 = new Boy;
	PrintFunction(p1);
	PrintFunction(c1);
	PrintFunction(b1);


	return 0;
}

