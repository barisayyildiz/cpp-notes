#include <iostream>

using namespace std;

class Enc
{
private:
	int x;
public:
	void set(int a)
	{
		x = a;
	}

	int get()
	{
		return x;
	}
};

int main()
{
	Enc obj1, obj2;

	obj1.set(5);

	cout << obj1.get() << endl;
	cout << obj2.get() << endl;


	return 0;
}