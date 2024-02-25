#include <iostream>
#include "Racecar.h"

bool testRacecar();

int Main(){
    if (testRacecar()){
        cout << "Passed all test cases!!! :)" << endl;
    }
    return 0;
}

bool testRacecar() {
    bool test_case_result = true; // Starts as passed
    Racecar racecar; // Create racecar to test

  // Default Constructor Test Case (getDriverName)
    if (racecar.getDriverName() != "Jane Doe"){
        cout << "FAILED IN CREATING DEFAULT CONSTRUCTOR CASE!!!" << endl;
        test_case_result = false;
    }
  
  // setSalary Test Case (int)
    racecar.setSalary(1000000);
    if (racecar.getSalary() != 1000000) {
        cout << "FAILED SALARY TEST CASE!!!" << endl;
        test_case_result = false;
    }

  // setDriverName test case (string)
    racecar.setDriverName("Max Verstappen");
    if (racecar.getDriverName() != "Max Verstappen"){
        cout << "Failed TO SET DRIVER NAME!!!" << endl;
        test_case_result = false;
    }
  
    return test_case_result; // True = passes test case, False = fails test case
}
