#include "GasStation.h"

int GasStation::calculateTotalGas(Bus** buses, int n, Car** cars, int m) {
	int total = 0;

	for (int i = 0; i < n; i++) {
		total += buses[i]->getVolume();
	}

	for (int i = 0; i < m; i++) {
		total += cars[i]->getTank();
	}

	return total;
}
