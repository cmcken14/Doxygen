/**
 * @file Employee.h
 * @author Christian McKenzie (cmcken14@ut.utm.edu)
 * @brief Employee Class definition
 * @version 0.1
 * @date 2025-04-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @class Employee
 * @brief Employee class
 * 
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
 /**
  * @brief Print the employee information
  * 
  */
  virtual void print();

  /**
   * @brief Calculate the pay for the employee
   * 
   * @return double 
   */
  virtual double calculatePay();

  /**
   * @brief Increment the years of service for the employee
   * 
   */
  void anniversary();

  /**
   * @brief Construct a new Employee object
   * 
   */
  Employee();

  /**
   * @brief Construct a new Employee object
   * 
   * @param ID 
   * @param years 
   * @param hourlyRate 
   * @param hoursWorked 
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
