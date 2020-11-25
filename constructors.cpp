#include <iostream>

using namespace std;


class DayofYear
{
private:
	int month;
	int day;
public:
	DayofYear(int m, int d);
	DayofYear(int d);
	DayofYear();

	void setDay(int m, int d);
	void getDay();
};

DayofYear::DayofYear(int m, int d)
{
	month = m;
	day = d;
}

DayofYear::DayofYear(int d)
{
	day = d;
	month = 1;
}

DayofYear::DayofYear()
{
	month = 1;
	day = 1;
}

void DayofYear::setDay(int m, int d)
{
	if(m > 12 || m < 1 || d > 31 || d < 1)
	{
		cout << "Invalid input..." << endl;
		return;
	}

	month = m;
	day = d;
}

void DayofYear::getDay()
{
	cout << month << " : "<<day << endl;
}

int main()
{
	int m = 3, d = 7;

	DayofYear day, day2(m, d);

	day.getDay();
	day2.getDay();


	return 0;
}