//#pragma once
#ifndef TRUCK_H
#define TRUCK_H
/*
	3.	Define a Truck class that inherits from Vehicle.Define the member variables and method prototypes in Truck.h, and the implementation of the methods in Truck.cpp.
		a. Define a member variable for the towing capacity
		b. Define a constructor and appropriate getters and setters
		c. Define a displayInfo method to display the contents of the object(call the base class method to display the Vehicle info, then display the Truck info)
*/

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	int towCap;
public:
	Truck();

	void setTowCap(int);
	double getTowCap();

	void displayInfo();
};

#endif