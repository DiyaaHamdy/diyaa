//
//  Mechanic.cpp
//  Assignment 3
//
//  Created by Diyaa Hamdy on 22/03/2023.
//

#include "Mechanic.h"

Mechanic::Mechanic()
{
    counter = 0;
    sizeOfArray = 0;
}

void Mechanic::setCounter(int c)
{
    counter = c;
}

void Mechanic::setA(Appointment *app, int size)
{
    A = app;
    sizeOfArray = size;
}

bool Mechanic::isAvailable()
{
    for (int i=0; i<sizeOfArray; i++)
    {
        if (A[i].hrs == 0)
            return true;
        else
            return false;
    }
}

int Mechanic::getCounter()
{
    return counter;
}


