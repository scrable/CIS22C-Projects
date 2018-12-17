#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack s1;
    s1.push(20);

    //cout << "Should exit -1 here";
    //s1.pop();
    //cout << "Top: " << s1.get_top() << endl;

    //test popping empty stack
    //should print error message 4 times
    //since there is still 1 item in stack
    for(int i = 1; i <= 5; i++)
    {
        s1.pop();
    }
    cout << endl;

    //push 1-50 to result in descending order
    for(int i = 1; i <= 50; i++)
    {
        s1.push(i);
    }

    cout << "Printing the stack: " << endl;
    s1.print();

    //create a copy of s1
    Stack s2(s1);

    cout << "\nPrinting the copy of the stack: " << endl;
    s2.print();

    //reverse printing
    cout << "\nPrinting the stack in reverse: " << endl;
    s1.printReverse();
    cout << "\nPrinting the copy of the stack in reverse: " << endl;
    s2.printReverse();


    cout << "\nThe current size of the stack is: " << s1.get_size() << endl;
    cout << "The current size of the copied stack is: " << s2.get_size() << endl;


    //remove 26-50 from first stack
    for(int i = 1; i <= 25; i++)
    {
        s1.pop();
    }

    cout << "\nPrinting the stack: " << endl;
    s1.print();
    cout << "\nPrinting the copy of the stack: " << endl;
    s2.print();

    //linear search
    cout << "\nSearching for 50 (should be -1, not in list): " << s1.linear_search(50) << endl;
    cout << "Searching for 50 (should be 1 in the list): " << s2.linear_search(50) << endl;

    cout << "\nTesting if the lists are equal: ";
    cout << (s1 == s2);

    //remove 26-50 from copied stack
    for(int i = 1; i <= 25; i++)
    {
        s2.pop();
    }
    cout << "\nThe lists should now be equal: ";
    cout << (s1 == s2);
}

/*

delete_head(): List is empty. Cannot remove first element.
delete_head(): List is empty. Cannot remove first element.
delete_head(): List is empty. Cannot remove first element.
delete_head(): List is empty. Cannot remove first element.

Printing the stack:
50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24
 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1

Printing the copy of the stack:
50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24
 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1

Printing the stack in reverse:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50

Printing the copy of the stack in reverse:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50

The current size of the stack is: 50
The current size of the copied stack is: 50

Printing the stack:
25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1

Printing the copy of the stack:
50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24
 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1

Searching for 50 (should be -1, not in list): -1
Searching for 50 (should be 1 in the list): 1

Testing if the lists are equal: 0
The lists should now be equal: 1

Process returned 0 (0x0)   execution time : 0.028 s
Press any key to continue.

*/
