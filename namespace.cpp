#include <iostream>
using namespace std;

namespace paket
{
	int x1 = 20;
	int x2 = 300;
}

using namespace paket;

int main()
{

	cout << "Hello World\n";

	cout << "hello" << endl;

	cout << paket::x1 << " " << paket::x2 << endl;
	/*
	using namespace paket
	
	cout << x1 << " " << x2 << endl;

	return 0;
}
