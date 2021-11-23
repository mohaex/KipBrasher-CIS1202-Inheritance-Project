#pragma once

#include <string>
#include "Vehicle.h"
using namespace std;

#ifndef car_h
#define car_h

class car : public vehicle 
{

public:
    car();
    car(int);


    int getNumberOfDoors();

    void setNumberOfDoors(int);

    void displayInfo();

private:
    int numberOfDoors;
};

#endif 