#include <iostream>

using namespace std;

class Test
{
	public:
		int x;
		int Test::*ptr;

		Test(int a) : x(a){/*left empty*/};

		void set(){
			ptr = &Test::x;
		}

		void print()const
		{
			cout << this->*ptr << endl;
		}

};

int main()
{
	Test t1(5);
	t1.set();
	t1.print();


	return 0;
}