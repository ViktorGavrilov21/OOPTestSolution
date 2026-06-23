#pragma once
#include "Student.h"

class Menager {
private:
	double calculateAverageMark(Student* student);

public:
	double calculateAverageMark(Student** list, int count);
	Student* getBestStudent(Student** list, int count);
};