//
//  Customer.cpp
//  Assignment 3
//
//  Created by Diyaa Hamdy on 22/03/2023.
//

#include "Customer.h"

//Defining member functions of class customer
Customer::Customer()
{
    mechanicID = 0;
}

void Customer::setMechID(int ident)
{
    mechanicID = ident;
}

void Customer::setAppointment(int h, int m)
{
    a.hrs = h;
    a.mins = m;
}

int Customer::getMechID()
{
    return mechanicID;
}

Customer::Appointment Customer::getAppointment()
{
    return a;
}

bool Customer::operator<(Customer const& c)
{
  if (a.hrs < c.a.hrs)
    return true;
  else
    return false;
}
bool Customer::operator>(Customer const& c)
{
    if (a.hrs > c.a.hrs)
        return true;
    else
        return false;
}

bool Customer::operator==(Customer const &c)
{
    if (a.hrs == c.a.hrs && a.mins == c.a.mins)
        return true;
    else
        return false;
}
