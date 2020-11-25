#include <iostream>

using namespace std;



void deneme(int &a)
{
	a *= 2;
	return;
}


int main()
{
	int x = 10;

	cout << "x : " << x << endl;
	deneme(x);
	cout << "x : " << x << endl;



	return 0;
}