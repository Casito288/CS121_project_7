#include <iostream>
#include "date.h"
#include <sstream>

Date::Date(){
  month = 1;
  day = 1;
  year = 1000;
} // end Date constructor

void Date::init(std::string dateString){
  // mm/dd/yyyy

  // make stringstream and temp strigs
  std::stringstream ss;
  std::string sM, sD, sY;

  // seperate to temp strings
  ss.str(dateString);
  getline(ss, sM, '/');
  getline(ss, sD, '/');
  getline(ss, sY);

  // contert to ints, and clear
  ss.clear();
  ss.str("");

  ss << sM << " " << sD << " " << sY;
  ss >> month >> day >> year;

} // end init

void Date::printDate(){

  std::cout << month << " "
	    << day << ", " 
	    << year << std::endl;
} // end printDate
