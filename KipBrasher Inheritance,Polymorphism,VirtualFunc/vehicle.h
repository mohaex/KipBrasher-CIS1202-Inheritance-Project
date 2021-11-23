#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef vehicle_h
#define vehicle_h

class vehicle
{

public:
    vehicle();
    vehicle(string, int);

   
    string getManufacturer();
    int getBuildYear();


    void setManufacturer(string);
    void setBuildYear(int);


    void displayInfo();


private:
    string manufacturer;
    int BuildYear;
};

#endif