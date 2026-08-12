#pragma once
#include "Group.h"

class Menager {
private:
	double calculateAverageMark(Student* student);
public:
	~Menager();
	double calculateAverageMark(Group* group);
	Student* getBestStudent(Group* group);
};