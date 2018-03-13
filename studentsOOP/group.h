#pragma once
#include "student.h"
#define COUNT_STUDENTS 3
class Group
{
public:
	int getID();
	Student getStudent(int index);

	void setID(int ID);


	void addStudent(Student student);
private:
	int sizeOfGroup;
	Student* students;
	int id;

};