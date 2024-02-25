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

void Racecar::setPilotWage(int val) {
    if (val > 0){
        numWins = val;
    }
}

// Function to calculate an estimated sale price for the car
void Racecar::sellCar() {
}
