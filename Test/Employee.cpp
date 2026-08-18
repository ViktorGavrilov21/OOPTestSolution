#include "Employee.h"

//default constructor
Employee::Employee() {
	cout << "Employee default constructor\n";
	this->salary = 0.0;
}


//canonical constructor
Employee::Employee(string name, int age, char gender, bool alive, 
	double salary) : Human(name, age, gender, alive) {
	this->salary = salary;
}


//copy constructor
Employee::Employee(const Employee* employee) : Human(employee){
	cout << "Employee copy-constructor\n";
	this->salary = employee->salary;
}


//default destructor
Employee::~Employee() {
	cout << "Employee default destructorn\n";
}



double Employee::getSalary() {
	return salary;
}


void Employee::setSalary(double salary) {
	if (salary >= 0) {
		this->salary = salary;
	}
}