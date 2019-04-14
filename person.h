//begin person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    float  hoursWorked;
    float  payRate;

public:
    Person(string fName, string lName, float rate, float hours);
    void   setFirstName(string fName);
    string getFirstName();
    void   setLastName(string lName);
    string getLastName();
    void   setPayRate(float rate);
    float  getPayRate();
    void   setHoursWorked(float hours);
    float  getHoursWorked();
    float  totalPay();
    string fullName();
};
#endif // end person.h
