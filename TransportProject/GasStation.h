#pragma once
#include "Car.h"
#include "Bus.h"

class GasStation
{
private:
	//...
public:
	int calculateTotalGas(Bus** buses, int n, Car** cars, int m);
};

