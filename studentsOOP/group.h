#pragma once
#include "student.h"
class Group
{
public:
	int getID();
	Student getStudent(int index);

	void setID(int ID);


	void addStudent(Student student);
	void deleteStudent(int index);
	
private:
	int sizeOfGroup = 0;
	Student* students;
	int id;

};