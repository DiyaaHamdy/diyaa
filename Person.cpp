//
//  Person.cpp
//  Assignment 3
//
//  Created by Diyaa Hamdy on 21/03/2023.
//

#include "Person.h"


Person::Person()
{
    name = "";
    ID = 0;
    age = 0;
}

void Person::setName(string n)
{
    name = n;
}

void Person:: setID(int i)
{
    ID = i;
}

void Person::setAge(int a)
{
    age = a;
}

void Person::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
    cout << "Age: " << age << endl;
}

struct Person::Appointment
{
    int hrs,mins;
};






