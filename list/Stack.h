#ifndef Stack_H_
#define Stack_H_

#include "List.h"
#include <iostream>
#include <cstddef>

using namespace std;

class Stack
{
    public:
        /**constructors and destructors*/

        Stack();

        //initializes an empty stack
        //postcondition: an empty stack

        Stack(const Stack &S);
        //initializes this stack to have same elements as S
        //postcondition: a copy of stack


        ~Stack();

        //frees memory allocated to the stack
        //postcondition: memory for stack has been freed

        /**manipulation procedures*/

        void pop();
        //removes an element from the top of the stack
        //precondition: the stack isn't empty
        //postcondition: an element has been removed from the top of the stack

        void push(int data);
        //adds an element to the top of the stack
        //postcondition: an element added to the top of the stack

        /**accessors*/


bool operator==(const Stack &S);
//returns whether this stack is equal to another stack S

int get_top();
//returns the element at the top of the stack
//precondition: the stack is not empty

int get_size();
//returns the size of the stack

int linear_search(int value);
//returns the index at which value is located

//pre: Stack is not empty


/**additional operations*/


void print();
//prints the elements in the stack in a programmer-specified format to stdout


void printReverse();
//prints a stack in reverse order


    private:
        List<int> stack;


};

#endif /* Stack_H_ */
