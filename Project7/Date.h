#include <iostream>
using namespace std;
class Date
{
	int day;
	int month;
	int year;
	long toDays() const;
	static Date fromDays(long totalDays);

public:
	Date();
	Date(int _day, int _month, int _year);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int _day);
	void setMonth(int _month);
	void setYear(int _year);
	long operator-(const Date& other) const;
	Date operator+(int daysToAdd) const;
	void PrintInfo();
};

