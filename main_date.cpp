/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Methods - Helpers functions
  */

#include "date.h"
#include <iostream>

int main() {
  Date a_day(12,31,2012);
  std::cout << "a day: " << toString(a_day) << std::endl;
  std::cout << "day #" << dayOfYear(a_day) << std::endl;
  a_day.next();
  std::cout << "a day++: " << toString(a_day) << std::endl;
  a_day.back();
  std::cout << "a day: " << toString(a_day) << std::endl;


  return 0;
}