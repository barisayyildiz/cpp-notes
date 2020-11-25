#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;


int main()
{
	string line = "baris ayyildiz";

	stringstream check1(line);

	string temp;

	while(getline(check1, temp, ' '))
	{
		cout << temp << endl;
	}



	return 0;
}
