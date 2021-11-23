/*
Name: Kip/Kasey Brasher
Date: 11/22/21
Class: CIS 1202
*/

#include <iostream>
#include <string>
#include "vehicle.h"
#include "truck.h"
#include "car.h"

using namespace std;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
void vehicleInput(string inputManufacturerer, int inputBuildYear)
{
    
    cout << "Vehicle Program " << endl;
    cout << "\nVehicle:" << endl;
    cout << "Enter the manufacturerer: ";
    getline(cin, inputManufacturerer);
    cout << "Enter the year built: ";
    cin >> inputBuildYear;

    
    vehicle vehicle;
    vehicle.setManufacturer(inputManufacturerer);
    vehicle.setBuildYear(inputBuildYear);
    

    cout << "\nVehicle Information: ";
    vehicle.displayInfo();
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

void carInput(string inputManufacturerer, int inputBuildYear, int inputDoors)
{
   
    cout << "\n\nCar: " << endl;
    cout << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, inputManufacturerer);

    cout << "Enter the year built: ";
    cin >> inputBuildYear;

    cout << "Enter the number of doors: ";
    cin >> inputDoors;

    
    car car;
    car.setManufacturer(inputManufacturerer);
    car.setBuildYear(inputBuildYear);
    car.setNumberOfDoors(inputDoors);
    

    cout << "\nCar Information: ";
    car.displayInfo();

}
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 


void truckInput(string inputManufacturerer, int inputBuildYear, int inputTowCap)
{
    
    cout << "\n\nTruck: " << endl;
    cout << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, inputManufacturerer);

    cout <<  "Enter the year built: ";
    cin >> inputBuildYear;

    cout << "Enter the towing capacity: ";
    cin >> inputTowCap;

   
    truck truck;
    truck.setManufacturer(inputManufacturerer);
    truck.setBuildYear(inputBuildYear);
    truck.setTowCapacity(inputTowCap);

    
    cout << "\nTruck Information: ";
    truck.displayInfo();

}



int main()
{
    string inputManufacturerer;
    int inputBuildYear = 0, inputDoors = 0, inputTowCap = 0;

    vehicleInput(inputManufacturerer, inputBuildYear);
    carInput(inputManufacturerer, inputBuildYear, inputTowCap);
    truckInput(inputManufacturerer, inputBuildYear, inputTowCap);
    cout << "\n";
   
    return 0;
}