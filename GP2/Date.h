#pragma once

class Date
{
	//Member Variables
	private:
	
	public:
	int month;
	int day;
	int year;
	
	//Constructors and Destructors
	Date();
	Date(int month, int day, int year);
	
    ~Date();

	//Accessors and Mutators
	void setMonth(int month);
	int getMonth();

	void setDay(int day);
	int getDay();

	void setYear(int year);
	int getYear();
};

