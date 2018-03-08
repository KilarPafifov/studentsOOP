#include"stdafx.h"
#include "student.h"
#include<string>
using namespace std;


Student::Student(){};
Student::~Student(){};



void Student::setFirstName(string firstName) {
	firstName = firstName;
};

void Student::setLastName(string lastName) {
	lastName = lastName
};
void Student::setYearOfBirth(int yearOfBirth) {
	yearOfBirth = yearOfBirth
};
	void setYearOfAdmission(int YearOfAdmission);
	void setPhysMarks(int* physMarks);

	string getFirstName();
	string getLastName();
	int getYearOfBirth();
	int getYearOfAdmission();
	int* getPhysMarks();
}