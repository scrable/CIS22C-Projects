#include <iostream>
#include "List.h"

using namespace std;

//constructor
List::List(): length(0), head(NULL), tail(NULL), cursor(NULL) {}

//destructor
List::~List()
{
    cursor = head;
    Nodeptr temp;
    while(cursor != NULL)
    {
        temp = cursor->next;
        delete cursor;
        cursor = temp;
    }
}

void List::insert_head(int data)
{
    if (length!=0)
    {
        Nodeptr N = new Node(data);//create the new node by calling the node constructor
        N->next = head;//set the new node's next field to point to the head
        head = N;//make the head be the new node
    }
    else
    {
        head = new Node(data);
        tail = head;
    }

    length++;
}

void List::insert_tail(int data)
{
    if (length!=0)
    {
        Nodeptr N = new Node(data);//create the new node by calling the node constructor
        tail->next = N;
        tail = N;
    }
    else
    {
        head = new Node(data);
        tail = head;
    }
    length++;
}

void List::print()
{
    Nodeptr temp = head; //create a temporary iterator
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

bool List::is_empty()
{
    return (length==0);
}

int List::get_length()
{
    return length;
}

int List::get_head()
{
    return head->data;
}

int List::get_tail()
{
    return tail->data;
}



