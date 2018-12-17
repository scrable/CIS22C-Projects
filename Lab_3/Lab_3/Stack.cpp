/*
    Corey Russ
    Lab 3
    CIS 22c
    Stack.cpp
*/

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(): size(0), top(NULL){}

Stack::~Stack()
{
    Nodeptr temp = top;
    while (temp != NULL)
    {
        temp = top->nextnode;
        delete top;
        top = temp;
    }
}

void Stack::pop()
{
    if(size == 0)
    {
        cout << "The stack is empty. Cannot pop an element.\n";
        return;
    }
    else
    {
        Nodeptr tempnode = top;
        top = top->nextnode;
        delete tempnode;
        size--;
    }
}

void Stack::push(string data)
{
    if(size == 0)
    {
        top = new Node(data);
    }
    else
    {
        Nodeptr temp = new Node(data);
        temp->nextnode = top;
        top = temp;
    }
    size++;
}

int Stack::get_size()
{
    return size;
}

string Stack::get_top()
{
    if (size == 0)
        return "The stack is empty.\n";
    else return top->data;
}

void Stack::print()
{
    if(size != 0)
    {
        Nodeptr temp = top;
        while(temp != NULL)
        {
            cout << temp->data << " " << endl;
            temp = temp->nextnode;
        }
    }
}

