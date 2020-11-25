#include <iostream>

using namespace std;

class Hex
{
private:
	int type;
	int size;
public:
	Hex();
	void initVar();
	void getVar();
};

void Hex::initVar()
{
	cout << "size : ";
	cin >> size;
	cout << "type : ";
	cin >> type;
}

void Hex::getVar()
{
	cout << size << " : " << type << endl;
}

Hex::Hex()
{
	initVar();
}

int main()
{
	// Bu şekilde constructor fonksiyonun içerisi çalışacak
	Hex h1;

	// Bu şekilde ise çalışmıyor!!!
	Hex h2();


	return 0;
}
