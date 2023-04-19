//
//  Linked List .h
//  Assignment 4 - LL
//
//  Created by Diyaa Hamdy on 19/04/2023.
//

#ifndef Linked_List__h
#define Linked_List__h


#endif /* Linked_List__h */
#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    
    Node* head;

public:
    LinkedList();
    void addNode(int data);
    void removeNode(int key);
    void printList();
    
};
