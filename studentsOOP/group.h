#pragma once
#include "student.h"
#define COUNT_STUDENTS 3
class Group
{
public:
	int getID();
	Student getStudent(int index);

	int setID(int id);
	Student setStudent(Student student);
private:
	Student students[COUNT_STUDENTS];
	int id;

};