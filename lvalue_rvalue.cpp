#include <iostream>
#include <string>
 
using namespace std;

void printName(string& name)
{
	cout << "[lvalue] : " << name << endl;
}

void printName(string&& name)
{
	cout << "[rvalue] : " << name << endl;
}

// // would work for both of those
// void printName(const string& name)
// {
// 	cout << name << endl;
// }


int main()
{
	string name = "Barış";
	string surname = "Ayyıldız";
	string fullname = name + surname;

	printName(fullname);			// lvalue
	printName(name+surname);	// rvalue



	return 0;
}

