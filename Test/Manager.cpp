#pragma once
#include "Menager.h"


double Menager::calculateAverageMark(Student* student) {
	double s = 0;

	for (int j = 0; j < student->getCountMark(); j++)
	{
		s += *(student->getMarks() + j);
	}

	return s / student->getCountMark();
}

double Menager::calculateAverageMark(Group* group) {
	double sum = 0;

	for (int i = 0; i < group->getCount(); i++)
	{
		sum += calculateAverageMark(group->getStudent(i));
	}

	return sum / group->getCount();
}

Student* Menager::getBestStudent(Group* group) {
	int index = 0;
	double avg = calculateAverageMark(group->getStudent(0));

	for (int i = 1; i < group->getCount(); i++) {
		double current_avg = calculateAverageMark(group->getStudent(i));

		if (avg < current_avg) {
			index = i;
			avg = current_avg;
		}
	}

	return group->getStudent(index);
}