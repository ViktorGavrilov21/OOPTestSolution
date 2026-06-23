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

double Menager::calculateAverageMark(Student** list, int count)
{
	double sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += calculateAverageMark(list[i]);
	}

	return sum / count;
}

Student* Menager::getBestStudent(Student** list, int count) {
	int index = 0;
	double avg = calculateAverageMark(list[0]);

	for (int i = 1; i < count; i++) {
		double current_avg = calculateAverageMark(list[i]);

		if (avg < current_avg) {
			index = i;
			avg = current_avg;
		}
	}

	return list[index];
}