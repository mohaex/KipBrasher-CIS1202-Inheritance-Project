#include "truck.h"
#include "vehicle.h"
#include <iostream>

truck::truck()
{
    towCapacity = 0;
}

truck::truck(int newTowingCap) 
{ 
    towCapacity = newTowingCap; 
}


//tow capacity
int truck::getTowCapacity()
{
    return towCapacity;
}

void truck::setTowCapacity(int towCapSet)
{
    towCapacity = towCapSet;
}


//display
void truck::displayInfo() 
{
    vehicle::displayInfo();

    cout << "Towing Capacity: " << towCapacity << endl;
}