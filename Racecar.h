#ifndef M2OEP_CHMOONEY_RACECAR_H
#define M2OEP_CHMOONEY_RACECAR_H

#include "vector"
#include "istream"
#include "ostream"
#include "Car.h"

class Racecar : public Car {
private:
    int avgPlacement; // Average placement on the podium aka finishing spot
    int salary; // Salary+winnings+sponsorships
    string driverName;
    int numWins; // Number of professional wins

public:
    Racecar(); // Constructor

    // Getters
    int getAvgPlacement();
    int getSalary();
    string getDriverName();
    int getNumWins(); 

    // Setters
    void setAvgPlacement(int);
    void setSalary(int);
    void setDriverName(string);
    void setNumWins(int);

    // Override the virtual sellCar method defined in Car.h, Virtual functions
    // are member functions whose behavior can be overridden in derived classes
    void sellCar() override;
};


#endif //M2OEP_CHMOONEY_RACECAR_H
