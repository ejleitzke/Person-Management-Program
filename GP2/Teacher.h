#pragma once
#include "person.h"
#include "Date.h"
class Teacher:public Person
{
	private:
	string TID;

	public:
	Date birthday;

	//Constructors and Destructor
	Teacher();
	Teacher(string f);
	Teacher(string f, string l);
	Teacher(string f, string l, string SSN);
	Teacher(string f, string l, string SSN, string TID, int month, int day, int year);
	~Teacher();

	//Accessors and Mutators
	void setTID(string TID);
	string getTID();
};

