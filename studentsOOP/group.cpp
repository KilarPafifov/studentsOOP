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



	/*
	1-�������� ��������� ��������� ��� �������� �������� ������ "Student" ������ �� 1 ��� �������
	2-������� �� ��������� ��������� �������� ��������� ������ �� �������
	3-������ �������� �������� � ����� ������
	4-�������� ������ ���������� ������ ��������
	5- ������� ������� ��������� �������� ������*/