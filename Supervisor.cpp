/**
 * @file Supervisor.cpp
 * @author Christian McKenzie (cmcken14@ut.utm.edu)
 * @brief Supervisor Class implementation
 * @version 0.1
 * @date 2025-04-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Supervisor:: Supervisor object
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}

/**
 * @brief Construct a new Supervisor:: Supervisor object
 * 
 * @param ID 
 * @param years 
 * @param hourlyRate 
 * @param hoursWorked 
 * @param numSupervised 
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

/**
 * @brief Prints the supervisor information
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

/**
 * @brief Calculate the pay for the supervisor
 * 
 * @return double 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
