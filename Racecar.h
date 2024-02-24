#ifndef M2OEP_CHMOONEY_RACECAR_H
#define M2OEP_CHMOONEY_RACECAR_H

#include "vector"
#include "istream"
#include "ostream"
#include "Car.h"

class Racecar : public Car {
private:
    int topSpeed;
    int mpg;
    string modelName;
    int price;

public:
    Racecar(); // Constructor

    // Getters
    int getTopSpeed();
    int getMpg();
    string getModelName();
    int getPrice();

    // Setters
    void setTopSpeed(int);
    void setMpg(int);
    void setModelName(string);
    void setPrice(int);

    // Override the virtual sellCar method defined in Car.h, Virtual functions
    // are member functions whose behavior can be overridden in derived classes
    void sellCar() override;
};


#endif //M2OEP_CHMOONEY_RACECAR_H
