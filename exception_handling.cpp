#include <iostream>

using namespace std;

// // 1st Method 
// double division(int a, int b)
// {
// 	if(b == 0)
// 		throw "cannot divide by zero";

// 	return (static_cast<double>(a) / b);
// }

// // 2nd Method 
// class DivisionByZero : public exception
// {
// 	public:
// 		// visual function inside exception class
// 		const char* what() const throw(){
// 			return "cannot divide by zero";
// 		}
// };

// 3rd Method
class DivisionByZero : public runtime_error
{
	public:
		DivisionByZero() : runtime_error("cannot divide by zero"){/*left empty*/};
};



double division(int a, int b)
{
	if(b == 0)
		throw DivisionByZero();

	return (static_cast<double>(a) / b);
}

int main()
{
	int a = 3, b = 0;
	double r;
	try
	{
		r = division(a,b);
		cout << "result : " << r << endl;
	}
	// // 2nd Method 
	catch(DivisionByZero& err)
	{
		cout << err.what() << endl;
	}

	// // 1st Method 
	// catch(const char* msg)
	// {
	// 	cout << msg << endl;
	// }

	return 0;
}
