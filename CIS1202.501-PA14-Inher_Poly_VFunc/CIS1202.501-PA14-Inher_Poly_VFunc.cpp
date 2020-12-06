/*
Name:   Nick
Class:  CIS1202.501
Date:   November 25, 2020
*/

//  User built classes
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>
#include <string>

using namespace std;

string getStrInput(string);
int getIntInput(string);

int main()
{
    /*
        4.	Write a main function to test the classes and methods.
            a.	Get input from the user for manufacturer and year built, then store this information in a Vehicle object.  Call the displayInfo method and display it on the output.
            b.	Get input from the user for manufacturer, year built, and number of doors, then store this information in a Car object.  Call the displayInfo method and display it on the output.
            c.	Get input from the user for manufacturer, year built, and towing capacity, then store this information in a Truck object.  Call the displayInfo method and display it on the output.
    */

    cout << "Vehicle Program" << endl << endl;

    //  Vehicle
    cout << "Vehicle:" << endl;

    //  Get User Input
    Vehicle v(getStrInput("Enter Manufacturer : "), getIntInput("Enter Year Built : "));
    cout << endl;

    //  Vehicle Output
    cout << "Vehicle Information:" << endl;
    v.displayInfo();
    cout << endl;

    //  Car
    cout << "Car:" << endl;
    //  Get User Input
    Car c(getIntInput("Enter the Number of Doors: "), getStrInput("Enter Manufacturer : "), getIntInput("Enter Year Built : "));
    cout << endl;
   
    //  Car Output
    cout << "Vehicle Information:" << endl;
    c.displayInfo();
    cout << endl;

    //  Truck
    cout << "Truck:" << endl;
    //  Get User Input
    Truck t(getIntInput("Enter Towing Capacity: "), getStrInput("Enter Manufacturer : "), getIntInput("Enter Year Built : "));
    cout << endl;
    
    //  Truck Output
    cout << "Vehicle Information:" << endl;
    t.displayInfo();
    cout << endl;

    system("pause");
    return 0;
}

string getStrInput(string message)
{
    string strInput;
    cout << message; cin >> strInput;
    return strInput;
}

int getIntInput(string message)
{
    int intInput;
    cout << message; cin >> intInput;
    return intInput;
}
