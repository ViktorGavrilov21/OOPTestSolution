#pragma once
#include "Group.h"

class Menager {
private:
	double calculateAverageMark(Student* student);

public:
	double calculateAverageMark(Group* group);
	Student* getBestStudent(Group* group);
};