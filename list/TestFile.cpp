#include <iostream>
#include "List.h"
using namespace std;

/*

int main() {
    List<int> Lint;
    List<char> Lchar;
    List<double> Ldouble;
    List<string> Lstring;

    cout << "Should print 3 error messages below iterator off end in delete_head, delete_tail, delete_cursor: \n";
//you need to test these one-by-one as they should each call the exit() function.
//comment out each one after it has been tested
    Lint.delete_head();
    Lint.delete_tail();
    Lint.delete_cursor();

    Lint.insert_head(5);
    cout << "Should print 5:\n";
    Lint.print();
    Lint.insert_tail(6);
    cout << "Should print 5 6:\n";
    Lint.print();
    Lint.start_cursor();
    Lint.insert_cursor(7);
    cout << "Should print 5 7 6:\n"; //note these should all print on a single line separated by spaces
    Lint.print();

    List<int> Lint2(Lint); //copy constructor
    cout << "Should print 5 7 6:\n";
    Lint2.print();

    cout << "Should print lists are equal: " << endl;
    if (Lint==Lint2)
        cout << "Lists are equal" << endl;
    else
        cout << "Lists are not equal" << endl;

    cout << "Size of list should be 0: "<< Lchar.get_length() << endl;
    Lchar.insert_head('a');
    Lchar.delete_head();
    cout << "Size of list should be 0: "<< Lchar.get_length() << endl;
    cout << "List should be empty. Nothing printed to screen: "<< endl;
    //Should print nothing and move to a new line.
    //Should NOT print an error message or any other message
    Lchar.print();

    cout << "Should print error message for scroll iterator is off the end of the list: \n";
    Ldouble.move_cursor();
    cout << "Should print error message that iterator off the end of list in insert: \n";
    Ldouble.insert_cursor(-8.9); //should not insert this value

    Ldouble.insert_tail(8.8);
    Ldouble.insert_tail(9.9);
    cout << "Should print 8.8 9.9:\n";
    Ldouble.print();

    cout << "Should print iterator is off the end of the List:\n";
    if(Ldouble.off_end())
    {
        cout <<"Iterator is off end\n";
    }
    else
    {
        cout << "Iterator is not off end\n";
    }
    Ldouble.start_cursor();
    Ldouble.move_cursor();
    cout << "Should print 9.9:\n";
    cout << Ldouble.get_cursor() << endl;
    Ldouble.move_cursor();
    cout << "Should print error message when calling current iterator off end:\n";
    cout << Ldouble.get_cursor() << endl;
    Ldouble.delete_tail();
    cout << "Should print 8.8:\n";
    Ldouble.print();

    return 0;
}
*/
