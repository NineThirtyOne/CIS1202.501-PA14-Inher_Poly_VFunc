#include <string>
#include "Car.h"

Car::Car(int nDoors, string newMan, int newYear) : Vehicle(newMan, newYear)
{
	numDoors = nDoors;
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
