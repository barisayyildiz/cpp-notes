#include <iostream>

using namespace std;


class myVector
{
private:
	int cap;
	int counter;
public:
	int *arr;
	myVector();
	// copy constructor
	explicit myVector(int size);
	// destructors
	~myVector();
	// copy constructor
	myVector(const myVector& v1);
	// assignment operator
	myVector& operator = (const myVector& v1);
	// index opearator
	int operator [] (int index);

	// getters
	inline int getCap() const{return cap;};
	inline int getCounter() const{return counter;};


	// push
	void push(int val);

	// pop
	void pop();

	// printing array
	// void printVector() const;

	friend std::ostream& operator << (std::ostream& out, const myVector& v1);

};


myVector::myVector() : cap(5), counter(0), arr(nullptr)
{
	arr = new int[cap];
}

myVector::myVector(int size) : cap(size)
{
	arr = new int[cap];
}

myVector::~myVector()
{
	delete[] arr;
	arr = nullptr;
}

myVector::myVector(const myVector& v1)
{
	cap = v1.getCap();
	counter = v1.getCounter();

	arr = new int[cap];

	for(int i=0; i<counter; i++)
	{
		arr[i] = v1.arr[i];
	}
}


myVector& myVector::operator = (const myVector& v1)
{
	if(arr != nullptr)
	{
		delete[] arr;
	}

	cap = v1.getCap();
	counter = v1.getCounter();

	arr = new int[cap];

	for(int i=0; i<counter; i++)
	{
		arr[i] = v1.arr[i];
	}

	return *this;
}

int myVector::operator [] (int index)
{
	return arr[index];
}

// void myVector::printVector()const
// {
// 	for(int i=0; i<getCounter(); i++)
// 	{
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }

ostream& operator << (ostream& out, const myVector& v1)
{
	for(int i=0; i<v1.getCounter(); i++)
	{
		out << v1.arr[i] << " ";
	}
	
	return out;
}

void myVector::push(int val)
{
	if(counter == cap)
	{
		int *temp = new int[cap+10];
		for(int i=0; i<cap; i++)
		{
			temp[i] = arr[i];
		}

		delete[] arr;
		arr = nullptr;
		arr = temp;
	}


	arr[counter++] = val;

}

void myVector::pop()
{
	counter--;
}


int main()
{
	myVector v1;

	v1.push(2);
	v1.push(6);
	v1.push(12);

	// v1.printVector();
	cout << v1 << endl;



	return 0;
}
