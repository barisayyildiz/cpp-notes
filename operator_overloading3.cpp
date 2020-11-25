#include <iostream>

using namespace std;

class myString
{
private:
	int length;
	char *arr = nullptr;
	
	void clearString()
	{
		if(arr != nullptr)
		{
			delete[] arr;
		}

		length = 0; 
	}


public:
	myString()
	{
		length = 0;
	}

	myString(const char string[])
	{
		clearString();

		while(string[length++] != '\0')
		{/*left empty*/}

		arr = new char[length];

		for(int i=0; i<length; i++)
		{
			arr[i] = string[i];
		}

	}

	myString operator = (const char string[])
	{
		clearString();
		
		while(string[length++] != '\0')
		{/*left empty*/}

		arr = new char[length];

		for(int i=0; i<length; i++)
		{
			arr[i] = string[i];
		}

		return *this;

	}

	// global function
	// that can access private members
	friend ostream& operator << (ostream &outputStream, myString &obj)
	{
		for(int i=0; i< obj.length; i++)
		{
			outputStream << obj.arr[i];
		}

		return outputStream;
	}

};


int main()
{

	myString s1 = "hello world";

	cout << s1 << endl;


	return 0;
}
