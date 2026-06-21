#pragma once
#include "Students.h"

class Menager {
public:

	double calculateAverageMark(Student* student) {
		double s = 0;

		for (int j = 0; j < student->count; j++)
		{
			s += student->marks[j];
		}

		s /= student->count;

		return s / student->count;
	}

	double calculateAverageMark(Student** list, int count)
	{
		double sum = 0;

		for (int i = 0; i < count; i++)
		{
			sum += calculateAverageMark(list[i]);
		}

		return sum / count;
	}

	Student* getBestStudent(Student** list, int count) {
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
};