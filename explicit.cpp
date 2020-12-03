#include <iostream>

using namespace std;

class A
{
private:
	int x;
public:
	int *arr;
	A();

	explicit A(int size);

	~A();
	A(const A& a1);
	A& operator = (const A& a1);
	inline int getX() const{return x;};
	void printArr();
};


A::A() : x(5)
{
	arr = new int[x];
	for(int i=0; i<x; i++)
	{
		arr[i] = i * 10;
	}
}

A::A(int size) : x(size)
{
	arr = new int[x];
	for(int i=0; i<x; i++)
	{
		arr[i] = i * 10;
	}
}

// destructor
A::~A()
{
	delete[] arr;
}

void A::printArr()
{
	for(int i=0; i<x; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// copy constructor
A::A(const A& a1)
{
	cout << "copy constructor..." << endl;
	x = a1.getX();
	arr = new int[x];

	for(int i=0; i<x; i++)
	{
		arr[i] = a1.arr[i];
	}
}

// assignment operator
A& A::operator = (const A& a1)
{
	cout << "assignment operator..." << endl;
	if(arr == nullptr)
	{
		delete[] arr;
	}

	x = a1.getX();
	arr = new int[x];

	for(int i=0; i<x; i++)
	{
		arr[i] = a1.arr[i];
	}

	return *this;
}

int main()
{

	// // this one gives error because of explicit keyword
	// A a = 20;

	A a1(20);
	a1.printArr();


	return 0;
}

