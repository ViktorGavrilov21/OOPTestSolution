#pragma once
#include "Student.h"

class Group {
private:
	string name;
	Student** list;
	int count;

public:
	Group();
	Group(string nm, Student** ls, int c);
	//Group(const Group* group);
	~Group();

	int getStudentIndexByName(string name, Group* group);
	int getStudentIndexByStudent(Student* student, Group* group);
	string getName();
	void setName(string nm);
	int getCount();
	Student* getStudent(int index);
	void addStudent(Student* Student);
	void removeStudent(int index);
	
	string toString();
};

