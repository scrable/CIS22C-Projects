/*
    Corey Russ
    Lab 7
    CIS 22c
    HashTest.cpp
*/
#include <iostream>
#include "Hashtable.h"

using namespace std;

int main()
{
    HashTable table;

    table.addItem("Pride and Prejudice", "Jane Austen", 12345678);
    table.addItem("Contact", "Carl Sagan", 9999333939);
    table.addItem("The Hunger Games", "Suzanne Collins", 12388888);
    table.addItem("Harry Potter", "J.K. Rowlings", 55555678);
    table.addItem("The Man in the High Castle", "Philip K Dick", 9595959595);
    table.addItem("Bleak House", "Charles Dickens", 47389023849);
    //add item that will end up in bucket 7 for testing
    table.addItem("M", "M", 046666321);
    table.printTable();



    cout << "Finding the author of Pride and Prejudice" << endl;
    table.findAuthor("Pride and Prejudice");

    table.printBucket(7);

    //should print message saying bucket is empty
    table.printBucket(0);


    //should remove the book from the hash and replace it with an empty node
    table.removeItem("Pride and Prejudice");
    //should now print message saying bucket is empty
    table.printBucket(4);

//    test removing first item in a list of 3
//    table.removeItem("The Man in the High Castle");
//    table.printBucket(7);
//
//    test removing second item in a list of 3
//    table.removeItem("Bleak House");
//    table.printBucket(7);

    //test removing the last item in a list of 3
    table.removeItem("M");
    table.printBucket(7);

    //try to delete an item that doesnt exist
    //should print an error message
    table.removeItem("g");


}

/*
------------------------------------

Index 0:
Title:
Author:
ISBN: 0
Number of values at this index: 0
------------------------------------

Index 1:
Title:
Author:
ISBN: 0
Number of values at this index: 0
------------------------------------

Index 2:
Title:
Author:
ISBN: 0
Number of values at this index: 0
------------------------------------

Index 3:
Title: The Hunger Games
Author: Suzanne Collins
ISBN: 12388888
Number of values at this index: 1
------------------------------------

Index 4:
Title: Pride and Prejudice
Author: Jane Austen
ISBN: 12345678
Number of values at this index: 1
------------------------------------

Index 5:
Title:
Author:
ISBN: 0
Number of values at this index: 0
------------------------------------

Index 6:
Title: Contact
Author: Carl Sagan
ISBN: 9999333939
Number of values at this index: 1
------------------------------------

Index 7:
Title: The Man in the High Castle
Author: Philip K Dick
ISBN: 9595959595
Number of values at this index: 3
------------------------------------

Index 8:
Title: Harry Potter
Author: J.K. Rowlings
ISBN: 55555678
Number of values at this index: 1
------------------------------------

Index 9:
Title:
Author:
ISBN: 0
Number of values at this index: 0
------------------------------------

Finding the author of Pride and Prejudice
The author of Pride and Prejudice is Jane Austen

The values stored at index 7 are:

Title: The Man in the High Castle
Author: Philip K Dick
ISBN: 9595959595

Title: Bleak House
Author: Charles Dickens
ISBN: 47389023849

Title: M
Author: M
ISBN: 10185937

The bucket at index 0 is empty.
The bucket at index 4 is empty.


The values stored at index 7 are:

Title: The Man in the High Castle
Author: Philip K Dick
ISBN: 9595959595

Title: Bleak House
Author: Charles Dickens
ISBN: 47389023849

Could not find g

Process returned 0 (0x0)   execution time : 0.022 s
Press any key to continue.
*/
