#include "Car.h"

Car::Car() {
	tank = NULL;
}


Car::Car(int tank) {
	setTank(tank);
}


Car::~Car() {}


int Car::getTank() {
	return tank;
}


void Car::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}