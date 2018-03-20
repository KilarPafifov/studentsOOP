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
	Student* studentsCopy;
	sizeOfGroup++;
	studentsCopy = new Student[sizeOfGroup];
	for (int i = 0; i < sizeOfGroup-1; i++) {
		studentsCopy[i] = students[i];
	}
	studentsCopy[sizeOfGroup-1] = student;
	delete[] students;
	students = studentsCopy;
}
void Group::deleteStudent(int index) {
	Student* studentCopy;
	sizeOfGroup--;
	studentCopy = new Student[sizeOfGroup];
	for (int i = 0; i < index; i++) {
		studentCopy[i] = students[i];
	}
	for (int i = index ; i < sizeOfGroup; i++) {
		studentCopy[i] = students[i + 1];
	}
	delete[] students;
	students = studentCopy;

};
void Group::printGroup() {
	for (int i = 0; i < sizeOfGroup; i++) {
		students[i].printStudent();
	}
};

	/*
	1-объявить временный контейнер для хранения объектов класса "Student" больше на 1 чем текущий
	2-занести во временный контейнер объектов хранимого класса из старого
	3-нового студента добавить в новый массив
	4-очистить память занимаемую старым массивом
	5- старому массиву присвоить значение нового*/