#include <string>
#include "Date.h"
using namespace std;
#pragma once


class Person
{
	//Member Variables
	private:
	string fName;
	string lName;
	string SSN;

	public:
	Date birthDay;

	//Constructors and Destructor
	Person();
	Person(string f);
	Person(string f, string l);
	Person(string f, string l, string SSN);
	Person(string f, string l, string SSN, int month, int day, int year);
	
	~Person();

	//Accessors and Mutators
	void setFname(string fName);
	string getFname();

	void setLname(string lName);
	string getLname();

	void setSSN(string SSN);
	string getSSN();

	//void setBirthDay(Date d);
	//Date getBirthDay();
};
