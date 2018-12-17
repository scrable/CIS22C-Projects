/*
    Corey Russ
    Lab 3
    CIS 22c
    Queue.h
*/

#ifndef QUEUE_H
#define QUEUE_H

#include<string>
#include <iostream>
#include <cstddef>
using namespace std;

class Queue
{
    public:
        /**constructors and destructors*/

        Queue();
        //initializes an empty queue
        //postcondition: an empty queue

        Queue(const Queue &queue);
        //initializes queue to have same elements as another queue
        //postcondition: a copy of queue

        ~Queue();
        //frees memory allocated to the queue
        //postcondition: memory for queue has been freed

        /**manipulation procedures*/

        void dequeue();
        //removes an element from the front of the queue
        //precondition: the queue isn't empty
        //postcondition: an element has been removed from the front of the queue

        void enqueue(string data);
        //adds an element to the back of the queue
        //postcondition: an element added to the back of the queue

        /**accessors*/

        bool operator==(const Queue &queue);
        //returns whether this queue is equal to another queue

        string get_front();
        //returns the element at the front of the queue
        //precondition: the queue is not empty

        int get_size();
        //returns the size of the queue

        bool is_empty();
        //returns whether the queue is empty

        /**additional queue operations*/
        void print();
        //prints the elements in the queue in a programmer-specified format to stdout


    private:
        struct Node
        {
            Node* nextnode;
            string data;
            Node(): nextnode(NULL), data(""){}
            Node(string data): nextnode(NULL), data(data){}
        };

        typedef struct Node* Nodeptr;

        Nodeptr front;
        Nodeptr back;
        unsigned int size;
};

#endif /* QUEUE_H_ */
