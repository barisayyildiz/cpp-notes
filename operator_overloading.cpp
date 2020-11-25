#include<iostream>
using namespace std;

 

class Complex
{
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0) : real(r), imag(i)
	{/*left empty*/};

	Complex operator + (Complex obj);
	Complex operator - (Complex obj);
	Complex operator - ();

	inline int getReal(){return real;};
	inline void setReal(int r){real = r;};

	inline int getImag(){return imag;};
	inline void setImag(int i){imag = i;};

	void print()
	{
		cout << real << " + " << imag << "i" << endl;
	}
};

// Member functions
Complex Complex::operator + (Complex obj)
{
	Complex res;
	res.real = real + obj.real;
	res.imag = imag + obj.imag;
	return res;
}

Complex Complex::operator - (Complex obj)
{
	Complex res;
	res.real = real + (- obj).real;
	res.imag = imag + (- obj).imag;

	return res;
}

Complex Complex::operator - ()
{
	Complex res;
	res.real = -real;
	res.imag = -imag;
	return res;
}

// Global Functions
bool operator == (Complex obj, Complex obj2)
{
	return (obj.getReal() == obj2.getReal() && obj.getImag() == obj2.getImag());
}



int main() 
{ 
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 - c2;
	c3.print(); 	
	// Complex c3 = c1 + c2; // An example call to "operator+" 
	// c1.print();

} 
