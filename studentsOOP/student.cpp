#include"stdafx.h"
#include "student.h"
#include<string>
using namespace std;


Student::Student(){};
Student::~Student(){};



void Student::setFirstName(string fName) {
	firstName = fName;
};
void Student::setLastName(string lName) {
	lastName = lName;
};
void Student::setYearOfBirth(int yearBirth) {
	yearOfBirth = yearBirth;
};
void Student::setYearOfAdmission(int YearAdmission) {
	yearOfAdmission = YearAdmission;
};
void Student::setPhysMarks(int m1, int m2, int m3) {
	physMarks[0] = m1;
	physMarks[1] = m2;
	physMarks[2] = m3;
};

string Student::getFirstName() {
	return firstName;
};
string Student::getLastName() {
	return lastName;
};
int Student::getYearOfBirth() {
	return yearOfBirth;
};
int Student::getYearOfAdmission() {
	return yearOfAdmission;
};
int Student::getPhysMarks(int index) {
	return physMarks[index];
};
