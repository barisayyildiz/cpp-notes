#include <iostream>

using namespace std;


template<class T>
void swapValues(T& var1, T& var2)
{
	T temp;
	temp = var1;
	var1 = var2;
	var2 = temp;
}

int main()
{
	double d1 = 3.14, d2 = -7.53;
	swapValues(d1, d2);
	cout << "d1 : " << d1 << ", d2 : " << d2 << endl;

	char c1 = 'a', c2 = 'b';
	swapValues(c1, c2);
	cout << "c1 : " << c1 << ", c2 : " << c2 << endl;

	// also can be used as
	int i1 = 3, i2 = 5;
	swapValues<int>(i1, i2);
	cout << "i1 : " << i1 << ", i2 : " << i2 << endl;

	return 0;
}
