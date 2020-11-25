#include<iostream>
using namespace std;

 

class Complex
{
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0) : real(r), imag(i)
	{/*left empty*/};

	// global friend functions
	// these are not member functions
	friend Complex operator + (Complex obj, Complex obj2);
	friend Complex operator - (Complex obj, Complex obj2);
	friend Complex operator - (Complex obj);
	friend bool operator == (Complex obj, Complex obj2);
	friend ostream& operator << (ostream & outputStream, const Complex &obj);

};

// Member functions
Complex operator + (Complex obj, Complex obj2)
{
	Complex res;
	res.real = obj.real + obj2.real;
	res.imag = obj.imag + obj2.imag;
	return res;
}

Complex operator - (Complex obj, Complex obj2)
{
	Complex res;
	res.real = obj.real + (- obj2).real;
	res.imag = obj.imag + (- obj2).imag;

	return res;
}

Complex operator - (Complex obj)
{
	Complex res;
	res.real = -obj.real;
	res.imag = -obj.imag;
	return res;
}

bool operator == (Complex obj, Complex obj2)
{
	return (obj.real == obj2.real && obj.imag == obj2.imag);
}

ostream& operator << (ostream& outputStream, const Complex& obj)
{
	outputStream << obj.real << " + " << obj.imag << "i" << endl;

	return outputStream;
}


int main() 
{ 
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 - c2;

	cout << c3 << endl;

	// Complex c3 = c1 + c2; // An example call to "operator+" 
	// c1.print();

} 
