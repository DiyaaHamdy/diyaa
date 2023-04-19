//
//  Linked List.cpp
//  Assignment 4 - LL
//
//  Created by Diyaa Hamdy on 19/04/2023.
//

#include <iostream>
#include "Linked List.h"
using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::addNode(int data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node* current = head;
        while (current->next != nullptr)
        {
        current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::removeNode(int key)
{
    if (head == nullptr)
    {
        return;
    }
    if (head->data == key)
    {
        head = head->next;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data != key)
    {
        current = current->next;
    }
    if (current->next == nullptr)
    {
        return;
    }
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
}

void LinkedList::printList()
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
