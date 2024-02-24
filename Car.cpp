#include "Car.h"

Car::Car() {
  
    topSpeed = 0;
    MPG = 0;
    MSRP = 0;
    brand = "default";
    model = "default";
}

// Get

int Car::getTopSpeed() {
    return topSpeed;
}

int Car::getMPG() {
    return MPG;
}

int Car::getMSRP() {
    return MSRP;
}

string Car::getBrand() {
    return brand;
}

string Car::getModel() {
    return model;
}

// Set

void Car::setTopSpeed(int val) {
    topSpeed = val;
}

void Car::setMPG(int val) {
    MPG = val;
}

void Car::setMSRP(int val) {
    MSRP = val;
}

void Car::setBrand(string val) {
    brand = val;
}

void Car::setModel(string val) {
    model = val;
}
