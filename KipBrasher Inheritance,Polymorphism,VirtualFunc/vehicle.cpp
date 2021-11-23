#include "vehicle.h"
#include <iostream>

vehicle::vehicle()
{
    BuildYear = 0;

    manufacturer = " ";
}

vehicle::vehicle(string newManufacture, int newBuildYear) 
{
    BuildYear = newBuildYear;

    manufacturer = newManufacture;
}


//manufacturer 
string vehicle::getManufacturer() 
{
    return manufacturer;
}


void vehicle::setManufacturer(string vehicleManufacturer)
{
    manufacturer = vehicleManufacturer;
}


//build year
int vehicle::getBuildYear()
{
    return BuildYear;
}

void vehicle::setBuildYear(int vehicleBuildYear)
{
    BuildYear = vehicleBuildYear;
}


//display
void vehicle::displayInfo() 
{
    
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << BuildYear << endl;
}


