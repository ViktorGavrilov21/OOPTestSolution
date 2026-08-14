#pragma once
#include <iostream>
#include <string>
using namespace std;


class Student {
private:
	string name;
	int age;
	//double mark;
	char gender;
	bool alive;
	int* marks;
	int count;
public:
	//default constructor
	Student();
	//constructor with argumrnts
	Student(string name, int age);
	Student(int age, string name);
	//canonical constructor
	Student(string name, int age, char gender, bool alive, int* marks, int count);
	//copy constructor
	Student(const Student* student);
	//default destructor
	~Student();
	//getters and setters
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	char getGender();
	void setGender(char gender);
	bool isAlive();
	void setAlive(bool alive);
	int getCountMark();
	int* getMarks();
	void setMarks(int* marks, int count);
	string toString();
};