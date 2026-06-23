#pragma once
#include "Student.h"


Student::Student() {
	cout << "Student default constructor\n";
	name = "";
	age = 0;
	alive = false;
	gender = '\0';
	marks = NULL;
	count = 0;
}

Student::Student(string nm, int ag) {
	cout << "Student constructor with arguments\n";
	name = nm;
	age = ag;
	alive = false;
	gender = '\0';
	marks = NULL;
	count = 0;
}

Student::Student(int ag, string nm) {
	cout << "Student constructor with arguments\n";
	name = nm;
	age = ag;
	alive = false;
	gender = '\0';
	marks = NULL;
	count = 0;
}

Student:: Student(string nm, int ag, char gndr, bool a, int* mrks, int cnt) {
	cout << "Student canonical constructor\n";
	name = nm;
	age = ag;
	alive = a;
	gender = gndr;
	marks = mrks;
	count = cnt;
}

Student::Student(const Student* student) {
	cout << "Student copy-constructor\n";
	name = student->name;
	age = student->age;
	alive = student->alive;
	gender = student->gender;
	marks = student->marks;
	count = student->count;
}

Student::~Student() {
	cout << "Student default desructor\n";
	if (marks != nullptr) {
		delete[] marks;
		count = 0;
	}
}

string Student::getName() {
	return name;
}

void Student::setName(string nm) {
	name = nm;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 0) {
		age = a;
	}
}

char Student::getGender() {
	return gender;
}

void Student::setGender(char g) {
	if (g == 'm' || g == 'f') {
		gender = g;
	}
}

bool Student:: isAlive() {
	return alive;
}

void Student::setAlive(bool a) {
	alive = a;
}

int Student::getCountMark() {
	return count;
}

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* m, int c) {
	if (c > 0 && m != nullptr) {
		if (marks != nullptr) {
			delete[] marks;
		}
		marks = m;
		count = c;
	}
}

string Student::toString() {
	string s = "";
	string mrks = "";

	for (int i = 0; i < count; i++) {
		mrks += to_string(*(marks + i)) + " ";
	}

	s += +"Student: " + name + ", age = " + to_string(age)
		+ ", gender = " + gender + ", mark = " + mrks
		+ ", alive = " + (alive ? "yes" : "no");

	return s;
}