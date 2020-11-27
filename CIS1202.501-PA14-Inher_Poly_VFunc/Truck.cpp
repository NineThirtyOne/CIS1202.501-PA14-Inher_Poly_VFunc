#include "Truck.h"

Truck::Truck()
{
	towCap = 0;
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