#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Person.h"
#include "Date.h"
class TAssistant:public Student, public Teacher
{
	private:
	string VID;
	string TID;

	public:
	Date birthday;

	//Constructors and Destructor
	TAssistant();
	TAssistant(string f);
	TAssistant(string f, string l);
	TAssistant(string f, string l, string SSN);
	TAssistant(string f, string l, string SSN, string VID, string TID, int month, int day, int year);
	~TAssistant();

	//Accessors and Mutators
	void setVID(string VID);
	void setTID(string TID);
	string getVID();
	string getTID();
};

