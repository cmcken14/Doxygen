/**
 * @file Supervisor.h
 * @author Christian McKenzie (cmcken14@ut.utm.edu)
 * @brief Supervisor Class Definiton
 * @version 0.1
 * @date 2025-04-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * @class Supervisor
 * 
 * @brief Supervisor class that inherits from Employee
 * 
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
 /**
  * @brief Print's the supervisor information
  * 
  */
  void print();

  /**
   * @brief Calculate the supervisors pay
   * 
   * @return double 
   */
  double calculatePay();

  /**
   * @brief Construct a new Supervisor object
   * 
   */
  Supervisor();

  /**
   * @brief Construct a new Supervisor object
   * 
   * @param ID 
   * @param years 
   * @param hourlyRate 
   * @param hoursWorked 
   * @param numSupervised 
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
