#include "address.h"
#include <iostream>

Address::Address(){

  street = "";
  city = "";
  state = "";
  zip = "";
} // end Address constructor

void Address::init(street, city, state, zip){
  street = street;
  city = city;
  state = state;
  zip = zip;
} // end init

void Address::printAddress(){

  std::cout << street << std:: endl
	    << city << " " << state
	    << ", " << zip << std::endl;
} // end printAddress
