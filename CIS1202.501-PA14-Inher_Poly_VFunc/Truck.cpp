#include "Truck.h"

Truck::Truck(int tCap, string newMan, int newYear) : Vehicle(newMan, newYear)
{
	towCap = tCap;
}

void Truck::setTowCap(int tC)
{
	towCap = tC;
}

double Truck::getTowCap()
{
	return towCap;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Towing Capacity: " << towCap << endl;
}