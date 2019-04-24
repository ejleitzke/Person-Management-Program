#include "TAssistant.h"
#include <string>
#include <iostream>
using namespace std;

//Constructors and Destructor
TAssistant::TAssistant()
{
}
TAssistant::TAssistant(string f)
{
	setFname(f);
	setLname("Null");
	setSSN("Null");
}
TAssistant::TAssistant(string f, string l)
{
	setFname(f);
	setLname(l);
	setSSN("Null");
}
TAssistant::TAssistant(string f, string l, string SSN)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
}
TAssistant::TAssistant(string f, string l, string SSN, string VID, string TID, int month, int day, int year):
birthday(month, day,year)
{
	setFname(f);
	setLname(l);
	setSSN(SSN);
	setTID(TID);
}

TAssistant::~TAssistant()
{
}

//Accessors and Mutators
void TAssistant::setVID(string VID)
{
	this->VID = VID;
}
void TAssistant::setTID(string TID)
{
	this->TID = TID;
}
string TAssistant::getVID()
{
	return VID;
}
string TAssistant::getTID()
{
	return TID;
}