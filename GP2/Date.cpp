#include "Date.h"
#include <string>

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}

Date::Date(int month, int day, int year)
{
	setMonth(month);
	setDay(day);
	setYear(year);
}

Date::~Date()
{
}

//Accessors and Mutators
void Date::setMonth(int month)
{
	this->month = month;
}

int Date::getMonth()
{
	return month;
}

void Date::setDay(int day)
{
	this->day = day;
}

int Date::getDay()
{
	return day;
}

void Date::setYear(int year)
{
	this->year = year;
}

int Date::getYear()
{
	return year;
}
