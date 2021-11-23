#include "car.h"
#include "vehicle.h"
#include <iostream>

car::car()
{
    numberOfDoors = 0;
}

car::car(int doors) 
{ 
    numberOfDoors = doors; 
}


//number of doors
int car::getNumberOfDoors()
{ 
    return numberOfDoors; 
}

void car::setNumberOfDoors(int doors) 
{ 
    numberOfDoors = doors; 
}


//display
void car::displayInfo() 
{
    vehicle::displayInfo();
    cout << "Doors: " << numberOfDoors << endl;
}