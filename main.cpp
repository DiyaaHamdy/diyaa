//
//  main.cpp
//  Assignment 3
//
//  Created by Diyaa Hamdy on 21/03/2023.
//

#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
#include "Queue.h"
using namespace std;

int main()
{
 //instantiate objects of the following classes
    Customer c,c1,c2;
    Mechanic m,m1,m2;
    
    c.setName("Diyaa");
    c.setAppointment(14, 30);
    c.printInfo();
    
    c1.setName("Hosam");
    c1.setAppointment(17, 00);
    c1.printInfo();
    
    c2.setName("Farida");
    c2.setAppointment(19, 45);
    c2.printInfo();
    
    m.setName("Kareem");
    m.isAvailable();
    m.printInfo();
    
    m1.setName("Aly");
    m1.isAvailable();
    m1.printInfo();
    
    m2.setName("Mona");
    m2.isAvailable();
    m2.printInfo();
}
