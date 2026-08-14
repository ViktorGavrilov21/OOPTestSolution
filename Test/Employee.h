#pragma once
#include "Human.h"


class Employee : public Human
{
private:
	double salary;
public:
	//default constructor
	Employee();
	//constructor with argumrnts
	Employee(string name, int age);
	//canonical constructor
	Employee(string name, int age, char gender, bool alive, double salary);
	//copy constructor
	Employee(const Employee* employee);
	//default destructor
	~Employee();

	double getSalary();
	void setSalary(double salary);
};