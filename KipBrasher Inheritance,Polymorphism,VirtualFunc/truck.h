#pragma once
#include <iostream>
#include <string>
#include "vehicle.h"

#ifndef truck_h
#define truck_h

class truck : public vehicle
{
public:
	truck();
	truck(int);

	int getTowCapacity();

	void setTowCapacity(int);

	void displayInfo();

private:
	int towCapacity;
};

#endif


