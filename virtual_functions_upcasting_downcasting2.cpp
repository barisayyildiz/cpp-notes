#include <iostream>
#include <vector>

using namespace std;

class Base
{
	public:
		Base()
		{
			cout << "Base class constructor..." << endl;
		}

		virtual void test() = 0;

};

class Derived : public Base
{
	public:
		Derived() 
		{
			cout << "Derived class constructor..." << endl;
		}

		void test(){/**/};
};

class Derived2 : public Base
{
	public:
		Derived2() 
		{
			cout << "Derived2 class constructor..." << endl;
		}
		void test(){/**/};
};

int main()
{

	vector<Base*> arr;

	arr.push_back(new Derived());
	arr.push_back(new Derived2());

	Base *ptr = dynamic_cast<Derived*>(arr[0]);
	Base *ptr2 = dynamic_cast<Derived*>(arr[1]);


	if(ptr2)
	{
		cout << "true" << endl;
	}else
	{
		cout << "false" << endl;
	}
	


	// if(static_cast<Derived*>(arr[0]))
	// {
	// 	cout << "true" << endl;
	// }else
	// {
	// 	cout << "false" << endl;
	// }
	





	return 0;
}
