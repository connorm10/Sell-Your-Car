#ifndef M2OEP_CHMOONEY_CAR_H
#define M2OEP_CHMOONEY_CAR_H

#include "vector"
#include "istream"
#include "ostream"
using namespace std;

class Car {

private:
    int topSpeed;
    int MPG;
    int MSRP;
    string brand;
    string model;

public:
    // Constructor
    Car();

    // Getters
    virtual int getTopSpeed();
    virtual int getMPG();
    virtual int getMSRP();
    virtual string getBrand();
    virtual string getModel();

    // Setters
    void setTopSpeed(int);
    void setMPG(int);
    void setMSRP(int);
    void setBrand(string);
    void setModel(string);

    // Function to create sale price for car based on year and use
    virtual void sellCar() = 0;
};


#endif //M2OEP_CHMOONEY_CAR_H
