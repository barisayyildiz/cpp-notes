#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cout << "Enter your name : " << endl;
	getline(cin, input);

	cout << input << endl;


	char buffer[100];
	cout << "Enter : " << endl;
	cin.getline(buffer, 100);

	cout << buffer << endl;


	return 0;
}