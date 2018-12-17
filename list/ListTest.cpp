/**

* Corey Russ

* CIS 22C

* ListTest.cpp

*/


//#include "List.h"
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    List<int> Lint;
//    List<char> Lchar;
//    List<double> Ldouble;
//    List<string> Lstring;
//
//    /***************/
//    /* int section */
//    /***************/
//
//    Lint.insert_head(1);
//    Lint.insert_head(2);
//    Lint.insert_head(3);
//    Lint.insert_head(4);
//    Lint.insert_head(5);
//    Lint.insert_tail(2);
//    Lint.insert_tail(3);
//    Lint.insert_tail(4);
//    Lint.insert_tail(5);
//
//    cout << "Should print 5 4 3 2 1 2 3 4 5:\n";
//    Lint.print();
//
//    Lint.start_cursor();
//    Lint.insert_cursor(700);
//
//    cout << "\nShould print 5 700 4 3 2 1 2 3 4 5:\n";
//    Lint.print();
//
//    Lint.move_cursor();
//    Lint.delete_cursor();
//
//    cout << "\nShould print 5 700 3 2 1 2 3 4 5:\n";
//    Lint.print();
//
//    /****************/
//    /* Char section */
//    /****************/
//
//    Lchar.insert_head('a');
//    Lchar.insert_head('b');
//    Lchar.insert_head('c');
//    Lchar.insert_head('d');
//    Lchar.insert_head('e');
//
//    cout << "Should print a, b, c, d, e on seperate lines\n";
//
//    Lchar.start_cursor();
//    cout << "1: " << Lchar.get_cursor() << endl;
//    Lchar.move_cursor();
//    cout << "2: " << Lchar.get_cursor() << endl;
//    Lchar.move_cursor();
//    cout << "3: " << Lchar.get_cursor() << endl;
//    Lchar.move_cursor();
//    cout << "4: " << Lchar.get_cursor() << endl;
//    Lchar.move_cursor();
//    cout << "5: " << Lchar.get_cursor() << endl;
//    Lchar.move_cursor();
//
//    //test exit with get_cursor()
//   // cout << "Should be an error" << Lchar.get_cursor() << endl;
//
//    /******************/
//    /* Double section */
//    /******************/
//
//    cout << "\nList should be empty\n";
//    Ldouble.move_cursor();
//
//    cout << "\nTry to insert a value at current cursor. It should not work:\n";
//    Ldouble.insert_cursor(100.95);
//
//    Ldouble.insert_tail(1.1);
//    Ldouble.insert_tail(2.2);
//    Ldouble.insert_tail(3.3);
//    Ldouble.insert_tail(4.4);
//    Ldouble.insert_tail(5.5);
//    Ldouble.insert_tail(6.6);
//    Ldouble.insert_tail(7.7);
//    Ldouble.insert_tail(8.8);
//    Ldouble.insert_tail(9.9);
//    cout << "\nShould print 1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9:\n";
//    Ldouble.print();
//
//    cout << "Should print iterator is off the end of the List:\n";
//    if(Ldouble.off_end())
//    {
//        cout <<"Iterator is off end\n";
//    }
//    else
//    {
//        cout << "Iterator is not off end\n";
//    }
//
//    Ldouble.start_cursor();
//    Ldouble.move_cursor();
//    cout << "Should print 2.2:\n";
//    cout << Ldouble.get_cursor() << endl;
//
//
//    Ldouble.move_cursor();
//    Ldouble.move_cursor();
//    Ldouble.move_cursor();
//    Ldouble.move_cursor();
//    Ldouble.move_cursor();
//    Ldouble.move_cursor();
//    Ldouble.move_cursor();
//    Ldouble.move_cursor();
//    cout << "\nShould print error saying we can't delete the next item" << endl;
//    Ldouble.delete_cursor();
//
//    //print the double list
//    cout << "Printing the list again: " << endl;
//    Ldouble.print();
//
//    for(int i = 0; i < 7; i++)
//        Ldouble.delete_tail();
//
//    cout << "\nShould print 1.1 2.2:\n";
//    Ldouble.print();
//
//    /********************/
//    /* Int copy section */
//    /********************/
//
//    List<int> Lint_copy(Lint);
//
//    cout << "\nThe lists should be the same\n";
//    if(Lint_copy == Lint)
//        cout << "The lists are the same\n";
//    else
//        cout << "The lists are different\n";
//
//    Lint_copy.insert_head(10);
//    Lint_copy.insert_tail(0);
//
//    cout << "\nOriginal list - should be 5 700 3 2 1 2 3 4 5\n";
//    Lint.print();
//    cout << "Copy - should be 5 700 3 2 1 2 3 4 5\n";
//    Lint_copy.print();
//
//    cout << "\nLists should be different";
//    if(Lint_copy == Lint)
//        cout << "\nThe lists are the same\n";
//    else
//        cout << "\nThe lists are different\n";
//
//    cout << "\nInserting 1 at current cursor location\n";
//    Lint_copy.insert_cursor(1);
//
//    /********************/
//    /* Reverse section */
//    /********************/
//
//    cout << "\nPrinting list in reverse.\n";
//    Lint_copy.printReverse();
//
//    //should exit -1 here
//    //because the cursor is off end from previous operations
//    //cout << Lint_copy.getIndex();
//
//    //restart the cursors position
//    Lint_copy.start_cursor();
//
//    /********************/
//    /* getIndex section */
//    /********************/
//
//    cout << "\n\nShould print 1: " << Lint_copy.getIndex() << endl;
//
//    Lint_copy.move_cursor();
//    cout << "Should print 2: " << Lint_copy.getIndex() << endl;
//
//    //advance cursor to the end of our known list
//    for(int i = 0; i < 9; i++)
//    {
//        Lint_copy.move_cursor();
//    }
//
//    //cursor should now be off end
//    //Lint_copy.move_cursor();
//    //cout << "\nShould print off end: " << Lint_copy.getIndex();
//
//    /*************************/
//    /* scrollToIndex section */
//    /*************************/
//
//
//    Lint_copy.scrollToIndex(1);
//    cout << "Index should be 1: " << Lint_copy.getIndex() << endl;
//
//    Lint_copy.scrollToIndex(10);
//    cout << "Index should be 10: " << Lint_copy.getIndex() << endl;
//
//    //test index off end
//    //will exit -1 here
//    //Lint_copy.scrollToIndex(200);
//    //cout << "Index should be off end: " << Lint_copy.getIndex() << endl;
//
//
//    /*************************/
//    /* Linear Search section */
//    /*************************/
//
//    //create a quick sorted list for testing
//    List<int> SortedInt;
//    for(int i = 1; i <= 50; i++)
//    {
//        SortedInt.insert_tail(i);
//    }
//
//    cout << "Should print 5: " << SortedInt.linear_search(5) << endl;
//
//    cout << "Should print -1: " << SortedInt.linear_search(1000) << endl;
//
//    cout << "Should print index 5: ";
//    cout << SortedInt.binary_search(1, SortedInt.get_length(), 5)<< endl;
//
//    return 0;
//}

/*
Should print 5 4 3 2 1 2 3 4 5:
5 4 3 2 1 2 3 4 5

Should print 5 700 4 3 2 1 2 3 4 5:
5 700 4 3 2 1 2 3 4 5

Should print 5 700 3 2 1 2 3 4 5:
5 700 3 2 1 2 3 4 5
Should print a, b, c, d, e on seperate lines
1: e
2: d
3: c
4: b
5: a

List should be empty
move_cursor(): The list is empty.

Try to insert a value at current cursor. It should not work:
insert_cursor(): List is empty. Cannot insert 100.95

Should print 1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9:
1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9
Should print iterator is off the end of the List:
Iterator is off end
Should print 2.2:
2.2

Should print error saying we can't delete the next item
The cursor is offend. Cannot delete the item.
Printing the list again:
1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9

Should print 1.1 2.2:
1.1 2.2

The lists should be the same
The lists are the same

Original list - should be 5 700 3 2 1 2 3 4 5
5 700 3 2 1 2 3 4 5
Copy - should be 5 700 3 2 1 2 3 4 5
10 5 700 3 2 1 2 3 4 5 0

Lists should be different
The lists are different

Inserting 1 at current cursor location
The cursor is offend. Cannot insert the item.

Printing list in reverse.
0 5 4 3 2 1 2 3 700 5 10


Should print 1: 1
Should print 2: 2
Index should be 1: 1
Index should be 10: 10
Should print 5: 5
Should print -1: -1
Should print index 5: 5

Process returned 0 (0x0)   execution time : 0.019 s
Press any key to continue.
*/
