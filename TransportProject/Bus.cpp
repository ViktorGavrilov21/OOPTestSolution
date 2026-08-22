#include "Bus.h"

Bus::Bus() {
	volume = 0;
	//...
}


Bus::Bus(int volume) {
	if (volume > 0) {
		this->volume = volume;
	}
	//...
}


Bus::~Bus() {
	//...
}


int Bus::getVolume() {
	return volume;
}


void Bus::setVolume(int volume) {
	if (volume > 0) {
		this->volume = volume;
	}
}