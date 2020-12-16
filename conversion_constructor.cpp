#include <iostream>

using namespace std;

class A
{
private:
	int x, y;
public:
	A();
	// conversion constructor??
	A(int a);
	A(int a, int b);

	// copy constructor
	A(const A& right);
	// assignment operator
	A& operator=(const A& right);
	// destructor
	~A();

	// print
	void print()const;

};

A::A() : x(0), y(0)
{
	cout << "default constructor" << endl;
}

A::A(int a) : x(a), y(0)
{
	cout << "tek parametre(conversion constructor)" << endl;
}

A::A(int a, int b) : x(a), y(b)
{
	cout << "çift parametre(constructor)" << endl;	
}

// copy constructor
A::A(const A& right)
{
	cout << "copy constructor" << endl;
	x = right.x;
	y = right.y;
}

// assignment operator
A& A::operator=(const A& right)
{
	cout << "assignment operator" << endl;
	x = right.x;
	y = right.y;
	return *this;
}

A::~A()
{
	cout << "destructor" << endl;
}

void A::print()const
{
	cout << "(" << x << "," << y << ")" << endl;
}



int main()
{
	A a;
	a = 5;
	a.print();
	a = 7;
	a.print();

	// Output:
	// tek parametre(conversion constructor)
	// assignment operator
	// destructor
	// (5,0)
	// tek parametre(conversion constructor)
	// assignment operator
	// destructor
	// (7,0)
	// destructor


	return 0;
}
