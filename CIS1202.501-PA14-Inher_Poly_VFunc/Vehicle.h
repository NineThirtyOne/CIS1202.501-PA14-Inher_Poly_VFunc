//#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
/*
	1.	Define a base class called Vehicle.  Define the member variables and method prototypes in Vehicle.h, and the implementation of the methods in Vehicle.cpp.
		a.	Define member variables for manufacturer and year built
		b.	Define a constructor and appropriate getters and setters
		c.	Define a displayInfo method to display the contents of the object
*/

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
	string man;
	int year;
public:
	Vehicle();

	void setMan(string);
	void setYear(int);

	string getMan();
	int getYear();

	void displayInfo();
};

#endif