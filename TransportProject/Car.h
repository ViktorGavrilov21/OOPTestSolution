#pragma once
#include "main.h"

class Car
{
private:
	string name;
	string model;
	int power;
	int speed;
	int tank;
public:
	Car();
	Car(int tank);
	~Car();

	int getTank();
	void setTank(int tank);
};

