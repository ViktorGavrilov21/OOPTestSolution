#pragma once
#include "main.h"


class Bus
{
private:
	string brand;
	string model;
	int count;
	int volume;
public:
	Bus();
	Bus(int volume);
	//...
	~Bus();

	int getVolume();
	void setVolume(int volume);
};

