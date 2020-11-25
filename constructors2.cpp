#include <iostream>

using namespace std;

class DayOfYear
{
public:
	DayOfYear(int m, int d);
	void output();
	int month;
	int day;
};


DayOfYear::DayOfYear(int m, int d) : month(m), day(d)
{/*intentionally left empty*/}

void DayOfYear::output()
{
	cout << "month : " << month << ", day : " << day << endl;
}


int main()
{

	DayOfYear today(3,4), birthday(5,6);

	today.output();
	birthday.output();




	return 0;
}