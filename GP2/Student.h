#pragma once
#include "person.h"
#include "Date.h"
class Student:public Person
{
	private:
	string VID;

	public:
	Date birthday;

	//Constructors and Destructor
	Student();
	Student(string f);
	Student(string f, string l);
	Student(string f, string l, string SSN);
	Student(string f, string l, string SSN, string VID, int month, int day, int year);
	~Student();

	//Accessors and Mutators
	void setVID(string VID);
	string getVID();
};

