//#pragma once
#ifndef CAR_H
#define CAR_H

/*
	2.	Define a Car class that inherits from Vehicle.  Define the member variables and method prototypes in Car.h, and the implementation of the methods in Car.cpp.
		a.	Define a member variable for the number of doors
		b.	Define a constructor and appropriate getters and setters
		c.	Define a displayInfo method to display the contents of the object (call the base class method to display the Vehicle info, then display the Car info)
*/
#include <string>
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	int numDoors;
public:
	Car(int, string, int);

	void setNumDoors(int);
	int getNumDoors();

	void displayInfo();
};

#endif
