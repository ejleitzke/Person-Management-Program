/*
* Description:		A group project that features various menu driven functions. The functions will 
*                   perform various tasks in utilizing a data base of Students, Teachers, and Assistants.
* Team Members:		Eric Leitzke, Yamil Rivera, Jeffrey Herbeck, Anthony Pass	
*/

// Preprocessor Directives
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <locale>
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Date.h"
#define CLS system ("cls")
#define FLUSH fflush(stdin)
#define SIZE 100
using namespace std;

// Prototypes
void createPerson(vector<Person> &people, int &counter);
void createStudent(vector<Student> &stu, int &counter);
void displayMenu();
void displayPersonDatabase(vector<Person> &people, int counter);
void displayStudentDatabase(vector<Student> &stu, int sCounter);

/*
* Name:			    main()
* Parameters:		None.
* Processes:		T.B.D
* Return Value:		an integer representing an error code; if the program ends without error, zero
*					will be returned to the calling program or operating system.
*/

int main()
{
	// Variables
	char choice;
	int pCounter = 0, sCounter = 0;
	vector<Person> people;
	vector<Student> stu;

	do
	{
		CLS;
		displayMenu();
		choice = cin.get();

		switch (choice){
		case 'c':
		case 'C':
			createPerson(people, pCounter);
			break;
		case 'a':
		case 'A':
			createStudent(stu, sCounter);
			break;
		case 'd':
		case 'D':
			displayPersonDatabase(people, pCounter);
			break;
		case 's':
		case 'S':
			displayStudentDatabase(stu, sCounter);
			break;
		case 'q':
		case 'Q':
			cout << "Good Bye!" << endl;
			break;
		default:
			cout << "Please make a valid selection!" << endl;
			system("pause");
			FLUSH;
			cin.ignore();
		}
		cout << endl;
		system("pause");
	} while (choice != 'q' && choice != 'Q');

	//system("pause");
	return 0;
}
void createPerson(vector<Person> &people, int &pCounter)
{
	int month = 0, day = 0, year = 0;
	string tempFname, tempLname, tempSSN;
	Person temp;

	cout << endl << "Enter First name: ";
	cin >> tempFname;
	FLUSH;
	cout << endl << "Enter Last name: ";
	cin >> tempLname;
	FLUSH;
	cout << endl << "Enter Social Security Number: ";
	cin >> tempSSN;
	FLUSH;
	cout << endl << "Enter birthday: Month [ENTER] Day [ENTER] Year [ENTER]" << endl;
	cin >> month >> day >> year;
	FLUSH;

	temp.birthDay.month = month;
	temp.birthDay.day = day;
	temp.birthDay.year = year;
	temp.setFname(tempFname);
	temp.setLname(tempLname);
	temp.setSSN(tempSSN);

	people.push_back(temp);
	pCounter++;
	FLUSH;
}
void createStudent(vector<Student> &stu, int &sCounter)
{
	int month = 0, day = 0, year = 0;
	string tempFname, tempLname, tempSSN, tempVID;
	Student temp;

	cout << endl << "Enter First name: ";
	cin >> tempFname;
	FLUSH;
	cout << endl << "Enter Last name: ";
	cin >> tempLname;
	FLUSH;
	cout << endl << "Enter Social Security Number: ";
	cin >> tempSSN;
	FLUSH;
	cout << endl << "Enter VID: ";
	cin >> tempVID;
	cout << endl << "Enter birthday: Month [ENTER] Day [ENTER] Year [ENTER]" << endl;
	cin >> month >> day >> year;
	FLUSH;

	temp.birthDay.month = month;
	temp.birthDay.day = day;
	temp.birthDay.year = year;
	temp.setFname(tempFname);
	temp.setLname(tempLname);
	temp.setSSN(tempSSN);
	temp.setVID(tempVID);

	stu.push_back(temp);
	sCounter++;
}


void displayMenu()
{
	cout << "********************************" << endl;
	cout << "*          Main Menu           *" << endl;
	cout << "*       Person Management      *" << endl;
	cout << "*           Program            *" << endl;
	cout << "********************************" << endl;
	cout << "(C)reate Person" << endl;
	cout << "(A)dd Student" << endl;
	cout << "(D)isplay Person Database" << endl;
	cout << "(S)how Student Database" << endl;
	cout << "(Q)uit." << endl;
	cout << "Please make a selection: ";
}

void displayPersonDatabase(vector<Person> &people, int counter)
{
	cout << endl << "The Person Database has " << counter << " records: " << endl;
	for(int i = 0; i < people.size(); i++ )
	{
		cout << endl << i + 1 << "." << endl;
		cout << "F Name: " << people[i].getFname() << endl;
		cout << "L Name: " << people[i].getLname() << endl;
		cout << "SSN:    " << people[i].getSSN() << endl ;
		cout << "DoB:    " << people[i].birthDay.month << "/" << people[i].birthDay.day 
			<< "/" << people[i].birthDay.year << endl;
	}
	FLUSH;
}
void displayStudentDatabase(vector<Student> &stu, int sCounter)
{
	cout << endl << "The Student Database has " << sCounter << " records: " << endl;
	for(int i = 0; i < stu.size(); i++ )
	{
		cout << endl << i + 1 << "." << endl;
		cout << "F Name: " << stu[i].getFname() << endl;
		cout << "L Name: " << stu[i].getLname() << endl;
		cout << "SSN:    " << stu[i].getSSN() << endl;
		cout << "VID:    " << stu[i].getVID() << endl;
		cout << "DoB:    " << stu[i].birthDay.month << "/" << stu[i].birthDay.day 
			<< "/" << stu[i].birthDay.year << endl;
	}
	FLUSH;
}