#include "Vehicle.h"

Vehicle::Vehicle(string newMan, int newYear)
{
	man = newMan;
	year = newYear;
}

void Vehicle::setMan(string m)
{
	man = m;
}

void Vehicle::setYear(int yr)
{
	year = yr;
}

string Vehicle::getMan()
{
	return man;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << man << endl;
	cout << "Year Built: " << year << endl;
}