/*
Name:   Nick
Class:  CIS1202.501
Date:   November 25, 2020
*/

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
        4.	Write a main function to test the classes and methods.
            a.	Get input from the user for manufacturer and year built, then store this information in a Vehicle object.  Call the displayInfo method and display it on the output.
            b.	Get input from the user for manufacturer, year built, and number of doors, then store this information in a Car object.  Call the displayInfo method and display it on the output.
            c.	Get input from the user for manufacturer, year built, and towing capacity, then store this information in a Truck object.  Call the displayInfo method and display it on the output.
    */

    Vehicle v;
    Car c;
    Truck t;

    string strInput;
    int intInput;
    cout << "Vehicle Program (Classes)" << endl << endl;

    //  Vehicle
    cout << "Vehicle:" << endl;
    cout << "Enter Manufacturer: "; cin >> strInput;
    v.setMan(strInput);

    cout << "Enter Year Built: "; cin >> intInput;
    v.setYear(intInput);
    cout << endl;

    //  Vehicle Output
    cout << "Vehicle Information:" << endl;
    v.displayInfo();
    cout << endl;

    //  Car
    cout << "Car:" << endl;
    cout << "Enter Manufacturer: "; cin >> strInput;
    c.setMan(strInput);

    cout << "Enter Year Built: "; cin >> intInput;
    c.setYear(intInput);

    cout << "Enter the Number of Doors: "; cin >> intInput;
    c.setNumDoors(intInput);
    cout << endl;
   
    //  Car Output
    cout << "Vehicle Information:" << endl;
    c.displayInfo();
    cout << endl;

    //  Truck
    cout << "Truck:" << endl;
    cout << "Enter Manufacturer: "; cin >> strInput;
    t.setMan(strInput);

    cout << "Enter Year Built: "; cin >> intInput;
    t.setYear(intInput);

    cout << "Enter Towing Capacity: "; cin >> intInput;
    t.setTowCap(intInput);
    cout << endl;
    
    //  Truck Output
    cout << "Vehicle Information:" << endl;
    t.displayInfo();
    cout << endl;

    system("pause");
    return 0;
}
