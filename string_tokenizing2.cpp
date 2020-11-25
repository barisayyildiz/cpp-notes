#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line = "baris ayyildiz";
	string token = "";

	for(int i=0; i<=line.length(); i++)
	{
		if(line[i] == ' ' || line[i] == '\0')
		{
			cout << token << endl;
			token = "";
		}else
		{
			token += line[i];
		}
	}


	return 0;
}
