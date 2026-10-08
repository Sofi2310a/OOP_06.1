#include "Date.h"
#include <iostream>	
using namespace std;	

long Date::toDays() const {
	return (year - 1) * 360 + (month - 1) * 30 + day;
}

Date Date::fromDays(long totalDays) {
	int y = (totalDays - 1) / 360 + 1;
	int rem = (totalDays - 1) % 360;
	int m = rem / 30 + 1;
	int d = rem % 30 + 1;
	return Date(d, m, y);
}

Date::Date() {}

Date::Date(int _day, int _month, int _year)
{
	day = _day;
	month = _month;
	year = _year;
}

int Date::getDay()
{
	return this->day;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getYear()
{
	return this->year;
}

void Date::setDay(int _day)
{
	day = _day;
}

void Date::setMonth(int _month)
{
	month = _month;
}

void Date::setYear(int _year)
{
	year = _year;
}

long Date::operator-(const Date& other) const
{
	return abs(this->toDays() - other.toDays());
}

Date Date::operator+(int daysToAdd) const
{
	long newDays = this->toDays() + daysToAdd;
	return fromDays(newDays);
}

void Date::PrintInfo()
{
	cout << "Date: " << endl << "Day " << day << endl
		<< "Month " << month << endl
		<< "Year " << year << endl << endl;
}