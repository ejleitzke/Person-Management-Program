#include "Person.h"
#include <string>
#include <iostream>
using namespace std;


//Constructors and Destructor
Person::Person()
{
	setFname("Null");
	setLname("Null");
	setSSN("Null");

}
Person::Person(string f)
{
	setFname(f);
	setLname("Null");
	setSSN("Null");
}
Person::Person(string f, string l)
{
	setFname(f);
	setLname(l);
	setSSN("Null");
}
Person::Person(string f, string l, string SSN)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
}
Person::Person(string f, string l, string SSN, int month, int day, int year):
birthDay(month, day, year)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
}
Person::~Person()
{
	//left blank intentionally
}

//Accessors and Mutators
void Person::setFname(string fName)
{
	this->fName = fName;
}
string Person::getFname()
{
	return fName;
}
void Person::setLname(string lName)
{
	this->lName = lName;
}
string Person::getLname()
{
	return lName;
}
void Person::setSSN(string SSN)
{
	this->SSN = SSN;
}
string Person::getSSN()
{
	return SSN;
}
 //void Person::setBirthDay(Date d)
// {
//	 this->birthDay = d;
 //}
 /*Date Person::getBirthDay()
 {
	 
	 
 }*/

