#include <iostream>
#include <cstdlib>

#include "Queue.h"
using namespace std;


Queue::Queue(): front(NULL), back(NULL), size(0) {}

Queue::Queue(const Queue &queue):size(queue.size)
{
    {
        if(queue.front == NULL)
        {
            back = front = NULL;
        }
       else
        {
            front = new Node;
            front->data = queue.front->data;
            Nodeptr temp;
            temp = queue.front;
            Nodeptr qtemp = front; //create temporary iterator

            while(temp->nextnode != NULL)
            {

                qtemp->nextnode = new Node;
                qtemp = qtemp->nextnode;
                temp = temp->nextnode;
                qtemp->data = temp->data;

            }

            back = qtemp;
        }
    }
}

Queue::~Queue()
{
    Nodeptr temp = front;
    Nodeptr temp2 = front;
    while (temp != NULL)
    {
        temp = temp->nextnode;
        delete temp2;
        temp2 = temp;
    }
}

void Queue::dequeue()
{
    if (size == 0)
    {
        cout << "dequeue(): The queue is empty.";
    }
    else
    {
        Nodeptr temp;//create a pointer to point to the current first item
        temp = front;
        front = front->nextnode;
        delete temp;
        size--;
    }
}

void Queue::enqueue(string data)
{
    if(size!=0)
    {
        Nodeptr N = new Node(data);//create a new node
        back->nextnode = N;
        back = N;
    }
    else
    {
        front = new Node(data);
        back = front;
    }
    size++;
}

bool Queue::operator==(const Queue &queue)
{
    return false;
}

string Queue::get_front()
{
    if(size == 0)
        return "The queue is empty\n";
    else return front->data;
}

int Queue::get_size()
{
    return size;
}

void Queue::print()
{
    Nodeptr temp;
    temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextnode;
    }
}
