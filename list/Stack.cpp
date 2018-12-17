#include "Stack.h"

using namespace std;

Stack::Stack()
{

}
Stack::~Stack()
{

}

Stack::Stack(const Stack &S):stack(S.stack){}

void Stack::pop()
{
    stack.delete_head();
}

void Stack::push(int data)
{
    stack.insert_head(data);
}

bool Stack::operator==(const Stack &S)
{
    return(stack == S.stack);
}

int Stack::get_top()
{
    if(get_size() != 0)
        return stack.get_head();
    else
    {
        cout << "get_top(): The list is empty.";
        exit(-1);
    }
}

int Stack::get_size()
{
    return stack.get_length();
}

int Stack::linear_search(int value)
{
    return stack.linear_search(value);
}

void Stack::print()
{
    stack.print();
}

void Stack::printReverse()
{
    stack.printReverse();
}


