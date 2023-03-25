//
//  Customer.h
//  Assignment 3
//
//  Created by Diyaa Hamdy on 22/03/2023.
//

#ifndef Customer_h
#define Customer_h


#endif /* Customer_h */
#include "Person.h"
#include "Person.cpp"
#include <iostream>
using namespace std;

class Customer : public Person
{
private:
    int mechanicID;
    Appointment a;
public:
    Customer();
    void setMechID(int ident);
    void setAppointment(int h, int m);
    int getMechID();
    Appointment getAppointment();
    bool operator<(Customer const& c);
    bool operator>(Customer const& c);
    bool operator==(Customer const& c);
    
};
