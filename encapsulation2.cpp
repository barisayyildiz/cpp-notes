#include <iostream>

using namespace std;


class DayofYear
{
private:
	int month;
	int day;
public:
	void setDay(int m, int d);
	void getDay();
};

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

	DayofYear day;
	day.setDay(m, d);
	day.getDay();


	return 0;
}