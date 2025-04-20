/**
 * @file Officer.cpp
 * @author Christian McKenzie (cmcken14@ut.utm.edu)
 * @brief Implementation of the Officer class
 * @version 0.1
 * @date 2025-04-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Officer:: Officer object
 * 
 */
Officer::Officer() {
  evilness = 500;
}

/**
 * @brief Construct a new Officer:: Officer object
 * 
 * @param ID 
 * @param years 
 * @param hourlyRate 
 * @param hoursWorked 
 * @param evilness 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

/**
 * @brief Print the officer information
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

/**
 * @brief Calculate the pay for the officer
 * 
 * @return double 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
