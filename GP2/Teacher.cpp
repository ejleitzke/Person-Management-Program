#include "Teacher.h"
#include <string>
#include <iostream>
using namespace std;

//Constructors and Destructor
Teacher::Teacher()
{
}
Teacher::Teacher(string f)
{
	setFname(f);
	setLname("Null");
	setSSN("Null");
}
Teacher::Teacher(string f, string l)
{
	setFname(f);
	setLname(l);
	setSSN("Null");
}
Teacher::Teacher(string f, string l, string SSN)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
}
Teacher::Teacher(string f, string l, string SSN, string TID, int month, int day, int year):
birthday(month, day,year)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
	setTID(TID);
}

Teacher::~Teacher()
{
}

//Accessors and Mutators
void Teacher::setTID(string TID)
{
	this->TID = TID;
}
string Teacher::getTID()
{
	return TID;
}