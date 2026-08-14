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

Student::Student(string name, int age) {
	cout << "Student constructor with arguments\n";
	this->name = name;
	this->age = age;
	alive = false;
	gender = '\0';
	marks = NULL;
	count = 0;
}

Student::Student(int age, string name) {
	cout << "Student constructor with arguments\n";
	this->name = name;
	this->age = age;
	alive = false;
	gender = '\0';
	marks = NULL;
	count = 0;
}

Student:: Student(string name, int age, char gender, bool alive, int* marks, int count) {
	cout << "Student canonical constructor\n";
	this->name = name;
	this->age = age;
	this->alive = alive;
	this->gender = gender;
	this->marks = marks;
	this->count = count;
}

Student::Student(const Student* student) {
	cout << "Student copy-constructor\n";
	name = student->name;
	age = student->age;
	alive = student->alive;
	gender = student->gender;
	count = student->count;
	marks = nullptr;

	if (student->count > 0 && student->marks != nullptr) {
		marks = new int[student->count];

		for (int i = 0; i < count; i++) {
			marks[i] = student->marks[i];
		}
	}
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

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

char Student::getGender() {
	return gender;
}

void Student::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

bool Student:: isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

int Student::getCountMark() {
	return count;
}

int* Student::getMarks() {
	return marks;
}

void Student::setMarks(int* marks, int count) {
	if (count > 0 && marks != nullptr) {
		if (marks != nullptr) {
			delete[] this->marks;
		}
		this->marks = marks;
		this->count = count;
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