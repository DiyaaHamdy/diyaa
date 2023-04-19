//
//  main.cpp
//  Assignment 4 - LL
//
//  Created by Diyaa Hamdy on 16/04/2023.
//

#include <iostream>
#include <vector>
#include "Linked List .h"
using namespace std;

void insertAfter(vector<int>& v, int firstValue, int secondValue)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == firstValue)
        {
            v.insert(v.begin() + i + 1, secondValue);
            i++;
        }
    }
}

int main()
{
    vector <int> v1;
    
    v1.resize(3);
   
    
    for (int i = 0; i < v1.size(); i++)
    {
        cout << "Enter element: ";
        cin >> v1[i];
        
    }
    
    for (int i = 0; i < v1.size(); i++)
    {
        cout << "Element " << i+1 << ": " << v1[i] << endl;
        
    }
    
    int firstValue, secondValue;
    cout << "Enter the first and second values: ";
    cin >> firstValue >> secondValue;

    insertAfter(v1, firstValue, secondValue);
    
    LinkedList l;
    l.addNode(5);
    l.addNode(6);
    l.addNode(7);
    l.printList();
    

}

