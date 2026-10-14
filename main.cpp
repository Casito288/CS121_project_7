#include <iostream>
#include "student.h"
#include "date.h"
#include "address.h"

void testAddress();
void testDate();
void testStudent();

int main() {
  std::cout << "Hello!" << std::endl;
  testAddress();
  testDate();
  //testStudent();
  return 0;
}

void testAddress(){

  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){

  Date d;
  d.init("01/27/1997");
  d.printDate();
}

/*void testStudent(){

  std::string studentString = "Danielle, Johnson, 321 81 Johnson Course Apt. 389, New Jamesside, IN, 59379, 0 2/17/2004, 05/15/2027, 65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << student->getLastFirst();
  delete student;
}*/
