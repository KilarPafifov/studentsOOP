#include"stdafx.h"
#include"group.h"

int Group::getID() {
	return id;
}

Student Group::getStudent(int index) {
	return students[index];
}

void Group::setID(int ID){
id = ID;
}

void Group::addStudent(Student student) {
	sizeOfGroup++;
	for (int i = 0; i < sizeOfGroup; i++) {
		students = new Student[sizeOfGroup];
	}
		students[sizeOfGroup] = student;
	for(int i = 0; i < sizeOfGroup; i++){
	stud[i] = students[i];
	}
	for (int i = 0; i < sizeOfGroup; i++) {
		students[i] = stud[i];
	}
	for (int i = 0; i < 10; i++) {
		 stud[i] = 0;
	}