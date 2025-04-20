/**
 * @file Employee.cpp
 * @author Christian McKenzie (cmcken14@ut.utm.edu)
 * @brief Employee Class implementation
 * @version 0.1
 * @date 2025-04-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "Employee.h"
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Employee:: Employee object
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

/**
 * @brief Construct a new Employee:: Employee object
 * 
 * @param ID 
 * @param years 
 * @param hourlyRate 
 * @param hoursWorked 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/**
 * @brief Destroy the Employee:: Employee object
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

/**
 * @brief Set the ID of the employee
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

/**
 * @brief Calculate the pay for the employee
 * 
 * @return double 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

