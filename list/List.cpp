/**

* Corey Russ

* CIS 22C

* List.cpp

*/

/*
#include <iostream>
#include "List.h"

using namespace std;

//constructor
template <class listitem>
List<listitem>::List(): length(0), head(NULL), tail(NULL), cursor(NULL) {}

//destructor
template <class listitem>
List<listitem>::~List()
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

template <class listitem>
void List<listitem>::insert_head(listitem data)
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

template <class listitem>
void List<listitem>::insert_tail(listitem data)
{
    if (length!=0)
    {
        Nodeptr N = new Node(data);//create the new node by calling the node constructor
        tail->next = N;//set the old tails next field to point to the new node
        tail = N;//make the new node the tail
        tail->next = NULL;//point the new tail to null
    }
    else
    {
        head = new Node(data);
        tail = head;
    }
    length++;
}

template <class listitem>
void List<listitem>::print()
{
    Nodeptr temp = head; //create a temporary iterator
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

template <class listitem>
bool List<listitem>::is_empty()
{
    return (length==0);
}

template <class listitem>
int List<listitem>::get_length()
{
    return length;
}

template <class listitem>
listitem List<listitem>::get_head()
{
    try
    {
        if(is_empty())
        {
            cout << "The list is empty.\n";
                throw 1;
        }
        else return head->data;
    }
    catch(...) {}
}

template <class listitem>
listitem List<listitem>::get_tail()
{
    return tail->data;
}

template <class listitem>
void List<listitem>::start_cursor()
{
    try
    {
        if(is_empty())
        {
            cout << "The list is empty.\n";
                throw 2;
        }
        else cursor = head;
    }
    catch(...) {}
}

template <class listitem>
listitem List<listitem>::get_cursor()
{
    try
    {
        if(is_empty())
        {
            cout << "The list is empty.\n";
                throw 1;
        }
        else return cursor->data;
    }
    catch(...) {}
}

template <class listitem>
void List<listitem>::move_cursor()
{
    try
    {
        if(is_empty())
        {
            cout << "The list is empty.\n";
                throw 1;
        }
        else cursor = cursor->next;
    }
    catch(...) {}
}

template <class listitem>
bool List<listitem>::off_end()
{
    try
    {
        if(is_empty())
        {
            cout << "The list is empty.\n";
                throw 1;
        }
        else return (cursor == NULL);
    }
    catch(...) {}
}

//copy constructor
template <class listitem>
List<listitem>::List(const List &list): length(list.length)
{
    if(list.head == NULL) //If the original list is empty, make an empty list for this list
    {
        head = tail = cursor = NULL;
    }
    else
    {
        head = new Node(list.head->data); //using second Node constructor
        Nodeptr temp = list.head; //set a temporary node pointer to point at the head of the original list
        cursor = head; //set iterator to point to head of the new list

        while(temp->next != NULL)
        {
            cursor->next = new Node; //using default node constructor to create an empty node
            cursor = cursor->next; //advance to this new node
            temp = temp->next; //advance up to the next node in the original list
            cursor->data = temp->data; //copy the data into the new list
        }
        tail = cursor; //Why do I need this line of code?
        cursor = NULL;
    }
}

template <class listitem>
void List<listitem>::delete_head()
{
    if (length==0) //or make a call to the is_empty() function
    {
        cout << "delete_head(): List is empty. Cannot remove first element." << endl;
    }
    else if (length==1)
    {
        delete head;
        head = tail = cursor = NULL;
        length = 0;
    }
    else
    {
        if (cursor == head)
            cursor = NULL;
        Nodeptr temp = head; //store original head node in a temporary variable
        head = head->next; //make the head pointer point to the second node in the List
        delete temp; //delete the original head
        length--;
    }
}

template <class listitem>
void List<listitem>::delete_tail()
{
    if (length==0) //or make a call to the is_empty() function
    {
        cout << "delete_tail(): List is empty. Cannot remove first element." << endl;
    }
    else if (length==1)
    {
        delete tail;
        head = tail = cursor = NULL;
        length = 0;
    }
    else
    {
        if (cursor == head)
            cursor = NULL;
        Nodeptr temp = tail; //store original tail node in a temporary variable

        ///////////////////
        // TAIL PREVIOUS = TAIL


        tail = head->next; //make the head pointer point to the second node in the List
        delete temp; //delete the original head
        length--;
    }
}
*/




