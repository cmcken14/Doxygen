/**
 * @file Officer.h
 * @author Christian McKenzie (cmcken14@ut.utm.edu))
 * @brief Officer Class definition
 * @version 0.1
 * @date 2025-04-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @class Officer
 * 
 * @brief Officer class that inherits from Employee
 * 
 */
class Officer : public Employee {
 private:
  double evilness;
 public:
 /**
  * @brief Print's the officer information
  * 
  */
  void print();

  /**
   * @brief Calculate the pay for the officer
   * 
   * @return double 
   */
  double calculatePay();

  /**
   * @brief Construct a new Officer object
   * 
   */
  Officer();

  /**
   * @brief Construct a new Officer object
   * 
   * @param ID 
   * @param years 
   * @param hourlyRate 
   * @param hoursWorked 
   * @param evilness 
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
