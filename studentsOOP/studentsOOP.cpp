// studentsOOP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "student.h"
#include <iostream>
using namespace std;

int main()
{
	Student s1;
	s1.setFirstName("Oleg");
	s1.setLastName("Petrov");
	s1.setYearOfBirth(1998);
	s1.setYearOfAdmission(2014);
	s1.setPhysMarks(5, 4, 3);
	cout << s1.getFirstName() << endl;
	cout << s1.getLastName() << endl;
	cout << s1.getYearOfBirth() << endl;
	cout << s1.getYearOfAdmission() << endl;
	for (int i = 0; i < 3; i++) {
		cout << s1.getPhysMarks(i) << " , ";
	}
	system ("pause");
    return 0;
}

