#include "Car.h"

Car::Car()
{
	numDoors = 2;
}

void Car::setNumDoors(int num)
{
	numDoors = num;
}

int Car::getNumDoors()
{
	return numDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Doors: " << numDoors << endl;
}
