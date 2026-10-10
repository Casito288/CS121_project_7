#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <iostream>
#include <string>



class Student {

  protected: 
    //std::string studentString;
    std::string firstName;
    std::string lastName;
    //Date* dob;
    //Date* expectedGrad;
    //Address* Address;
    int creditHours;
  public:
    Student();
    ~Student();
    void init(std::string studentString);
    void printStudent();
    void address();
    void date();
};

#endif
