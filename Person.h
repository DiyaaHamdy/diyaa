//
//  Person.h
//  Assignment 3
//
//  Created by Diyaa Hamdy on 21/03/2023.
//

#ifndef Person_h
#define Person_h



#include <iostream>
#endif /* Person_h */
using namespace std;

class Person
{
private:
    string name;
    int ID,age;
    
public:
    Person();
    void setName(string n);
    void setID(int i);
    void setAge(int a);
    string getName();
    int getID();
    int getAge();
    void printInfo();
    struct Appointment;
   
};




