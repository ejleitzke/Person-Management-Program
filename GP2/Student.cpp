#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

//Constructors and Destructor
Student::Student()
{
}
Student::Student(string f)
{
	setFname(f);
	setLname("Null");
	setSSN("Null");
}
Student::Student(string f, string l)
{
	setFname(f);
	setLname(l);
	setSSN("Null");
}
Student::Student(string f, string l, string SSN)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
}
Student::Student(string f, string l, string SSN, string VID, int month, int day, int year):
birthday(month, day,year)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
	setVID(VID);
}

Student::~Student()
{
}

//Accessors and Mutators
void Student::setVID(string VID)
{
	this->VID = VID;
}
string Student::getVID()
{
	return VID;
}