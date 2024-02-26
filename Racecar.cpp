#include "Racecar.h"
#include <iostream>

Racecar::Racecar() : Car(), avgPlacement(0), salary(0), driverName("Jane Doe") {
}

int Racecar::getAvgPlacement() {
    return avgPlacement;
}

int Racecar::getSalary() {
    return salary;
}

string Racecar::getDriverName() {
    return driverName;
}

int Racecar::getNumWins() {
    return numWins;
}

void Racecar::setAvgPlacement(int val) {
    if (val > 0) {
        avgPlacement = val;
    }
}

void Racecar::setSalary(int val) {
    if (val > 0){
        salary = val;
    }
}

void Racecar::setDriverName(string val) {
    driverName = val;
}

void Racecar::setNumWins(int val) {
    if (val > 0){
        numWins = val;
    }
}

// Function to calculate an estimated sale price for the car
// Prints info for car at end
void Racecar::sellCar() {

    string inputStr;
    int inputInt;
    bool error = false;

    cout << "Post your racecar for sale" << endl;

    do{
        cout << "Enter brand of racecar:";
        cin >> inputStr;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid string input" << endl;
            error = true;
        }
    }while(error);
    setBrand(inputStr);

    do{
        cout << "Enter model of racecar:";
        cin >> inputStr;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid string input" << endl;
            error = true;
        }
    }while(error);
    setModel(inputStr);

    do {
        cout << "Enter top speed of racecar:";
        cin >> inputInt;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid integer input" << endl;
            error = true;
        }
    }while(error);
    setTopSpeed(inputInt);

    do {
        cout << "Enter MPG of the racecar:";
        cin >> inputInt;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid integer input" << endl;
            error = true;
        }
    }while(error);
    setMPG(inputInt);

    do{
        cout << "Enter MSRP of racecar:";
        cin >> inputInt;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid integer input" << endl;
            error = true;
        }
    }while(error);
    setMSRP(inputInt);

    do{
        cout << "Enter average podium placement of racecar:";
        cin >> inputInt;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid integer input" << endl;
            error = true;
        }
    }while(error);
    setAvgPlacement(inputInt);

    do{
        cout << "Enter the name of the racecar's driver:";
        cin >> inputStr;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid string input" << endl;
            error = true;
        }
    }while(error);
    setDriverName(inputStr);

    do{
        cout << "Enter the salary of the driver:";
        cin >> inputInt;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid integer input" << endl;
            error = true;
        }
    }while(error);
    setSalary(inputInt);


    do{
        cout << "Enter the number of wins the racecar has:";
        cin >> inputInt;
        if (cin.fail()){
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Enter a valid integer input" << endl;
            error = true;
        }
    }while(error);
    setNumWins(inputInt);

    int estimatedSellingPrice = ((getNumWins() * (100000)) + getMSRP());

    cout << "----------Racecar For Sale----------" << endl;
    cout << "Racecar: " << getBrand() << " " << getModel() << endl;
    cout << "\tDriver:" << getDriverName() << endl;
    cout << "\tTop Speed:" << getTopSpeed() << endl;
    cout << "\tAverage Finishing Place:" << getAvgPlacement() << endl;
    cout << "\tNumber of Wins:" << getNumWins() << endl;
    cout << "\tSuggested Sale Price:" << estimatedSellingPrice << endl;
}
