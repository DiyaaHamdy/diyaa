//
//  Mechanic.h
//  Assignment 3
//
//  Created by Diyaa Hamdy on 22/03/2023.
//

#ifndef Mechanic_h
#define Mechanic_h


#endif /* Mechanic_h */
#include "Person.h"
#include "Person.cpp"
#include <iostream>
using namespace std;

//Declaring class mechanic

class Mechanic : public Person //inherits publicly from class person
{
private:
    int counter,sizeOfArray;
    Appointment *A;
    
public:
    Mechanic();
    bool isAvailable();
    void setCounter(int c);
    void setA(Appointment *app, int size);
    int getCounter();
    Appointment getA();
};
