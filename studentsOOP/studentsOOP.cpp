// studentsOOP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "student.h"
#include "group.h"
#include <iostream>
using namespace std;

int main()
{
	Group g1;
	Student s1, s2;
	s1.setFirstName("Oleg");
	s1.setLastName("Petrov");
	s1.setYearOfBirth(1998);
	s1.setYearOfAdmission(2014);
	s1.setPhysMarks(5, 4, 3);
	g1.addStudent(s1);


	s2.setFirstName("Gleb");
	s2.setLastName("Bobrov");
	s2.setYearOfBirth(1996);
	s2.setYearOfAdmission(2016);
	s2.setPhysMarks(5, 3, 5);

	g1.addStudent(s2);
	
	
	cout << g1.getStudent(1).getFirstName() << endl;
	cout << g1.getStudent(1).getLastName() << endl;
	cout << g1.getStudent(1).getYearOfBirth() << endl;
	cout << g1.getStudent(1).getYearOfAdmission() << endl;
	for (int i = 0; i < 3; i++) {
		cout << g1.getStudent(1).getPhysMarks(i) << " , ";
	}
	s1.printStudent();
	system ("pause");
    return 0;
}

