#include "List.h"
#include <iostream>

using namespace std;

int main()
{
    //creating a new list object L
    List L;

    L.insert_head(5);
    cout << "The head of the List should be 5: " << L.get_head() << endl;
    cout << "The tail of the List should be 5: " << L.get_tail() << endl;

    cout << "List should contain: 5" << endl;
    L.print();

    L.insert_tail(10);

    cout << "The head of the List should be 5: " << L.get_head() << endl;
    cout << "The tail of the List should be 10: " << L.get_tail() << endl;

    cout << "List should contain: 5 10" << endl;
    L.print();

    L.insert_head(15);
    cout << "The head of the List should be 15: " << L.get_head() << endl;
    cout << "The tail of the List should be 10: " << L.get_tail() << endl;

    cout << "List should contain: 15 5 10" << endl;
    L.print();

    L.insert_tail(70);
    cout << "The head of the List should be 15: " << L.get_head() << endl;
    cout << "The tail of the List should be 70: " << L.get_tail() << endl;

    cout << "List should contain: 15 5 10 70" << endl;
    L.print();

     L.insert_tail(1);
    cout << "The head of the List should be 15: " << L.get_head() << endl;
    cout << "The tail of the List should be 1: " << L.get_tail() << endl;

    cout << "List should contain: 15 5 10 70 1" << endl;
    L.print();


    return 0;
}
