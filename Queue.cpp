//
//  Queue.cpp
//  Assignment 3
//
//  Created by Diyaa Hamdy on 22/03/2023.
//

#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {Qind = 0; }

    void Queue::EnQueue(int x)
    {
        if(Qind > 30)
            cout << "Queue overflow" << endl;
        else
            {
                Q[Qind] = x;
                Qind++;
            }
    }
    
    int Queue::DeQueue()
    {
        int y;
        
        if(Qind <= 0)
            return 0;
        else
        {
            y = Q[0];
            for(int i=0;i<Qind;i++)
                Q[i] = Q[i+1];
            Qind = Qind - 1;
            return y;
        }
    }
    
    void Queue::DisplayQ()
    {
        int i;
        cout << "\n------------------------\n";
        for(i=0;i<Qind ; i++)
            cout << "(" << Q[i] << ") <- ";
        cout << "End" << endl;
        cout << "\n-------------------------\n";
    }
