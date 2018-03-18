#pragma once
#include <string>
using namespace std;

class Student
{
public:
	Student();
	~Student();
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setYearOfBirth(int yearOfBirth);
	void setYearOfAdmission(int YearOfAdmission);
	void setPhysMarks(int m1, int m2, int m3);

	string getFirstName();
	string getLastName();
	int getYearOfBirth();
	int getYearOfAdmission();
	int getPhysMarks(int index);
	void printStudent();

private:

	string firstName;
	string lastName;
	int yearOfBirth;
	int yearOfAdmission;
	int physMarks[3];
};
