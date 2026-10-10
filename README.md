#CS121 PROJECT 7
##

```
commands: 
valgrind memory leak checker

```

##Mermaid Live Diagram
```
classDiagram

class Student {
    # String studentString
    # String firstName
    # String lastName
    # Date* dob
    # Date* expectedGrad
    # Address* Address
    # init creditHours
    + Student()
    + -Student()
    + void init(studentString)
    + void printStudent()
    + void address()
    + void date()
}

class Address {
    # String street
    # String zip
    # String city
    # String state
    + Address()
    + void init(street, zip, city, state)
    + void printAddress()
}

class Date {
    # String dateString
    # int month
    # int day
    # int year
    + Date ()
    + void init(dateString)
    + void printDate()
}
```

## Student::Student()
```
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

class Student {
  protected String studentString
  protected String firstName
  protected String lastName
  protected Date* dob
  protected Date* expectedGrad
  protected Address* Address
  protected init creditHours
  public Student()
  public -Student()
  public void init(studentString)
  public void printStudent()
  public void address()
  public void date()
}

#endif
```

## void Student::init(string studentString)
```
  Student::string firstName;
  Student::string lastName;
```

## void Student::printStudent()
```
  print the date
  print the street
  print the state
  pirnt the address
  print the city
  print the Date of Birth
  print the graduation date
  print the total credit hours accululated
```

## void Student::address()
```
  declare Address object
  get address of student
  call the printAddress method
```
## void Student::date()
```

```

## Address::Address()
```
class Address {
  protected string street
  protected string zip
  protected string city
  protected string state
  public Address()
  public void init(street, zip, city, state)
  public void printAddress()
}
```

## void Address::init(street, zip, city, state)
```

```

## void Address::printDate()
```

```

## Date::Date()
```
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

class Date{
  protected string dateString
  protected int month
  protected int day
  protected int year
  Date()
  void init(dateString)
  void printDate()
}

#endif
```

## void Date::init(dateString)
```
  initialize integers month, day, year;
  parse the dateString into seperate strings
  convert the seperate strings into the new integers
```

## void Date::printDate()
```


```


##Main
```
declare void Address() method
declare void testDate() method
declare void testStudent() method
main function {
  call Address()
  call Date()
  call Student()
  
  return 0;
}
```
