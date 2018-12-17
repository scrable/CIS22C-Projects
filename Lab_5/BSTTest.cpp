///*
//    Corey Russ
//    Lab 5
//    CIS 22c
//    BSTTest.cpp
//*/
//
//#include "BST.h"
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    BST<int> bstInt;
//    BST<char> bstChar;
//
//
//    //test printing empty trees
//    bstInt.inOrderPrint();
//    bstChar.inOrderPrint();
//
//    /* Int */
//
//    cout << "Adding 50 to the tree" << endl;
//    bstInt.insert(50);
//
//    cout << "The root is: " << bstInt.getRoot() << endl;
//    cout << "Printing the tree in order: " << endl;
//    bstInt.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstInt.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstInt.postOrderPrint();
//
//    bstInt.insert(50);
//    bstInt.insert(5);
//    bstInt.insert(200);
//    bstInt.insert(20);
//    bstInt.insert(45);
//    bstInt.insert(38);
//
//    cout << "The root is: " << bstInt.getRoot() << endl;
//    cout << "Printing the tree in order: " << endl;
//    bstInt.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstInt.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstInt.postOrderPrint();
//
//    cout << "\nAdding 0 to the tree: " << endl;
//    bstInt.insert(0);
//
//    cout << "The root is: " << bstInt.getRoot() << endl;
//    cout << "Printing the tree in order: " << endl;
//    bstInt.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstInt.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstInt.postOrderPrint();
//
//
//    /* Char */
//
//    cout << "\nAdding H to the tree" << endl;
//    bstChar.insert('H');
//
//    cout << "The root is: " << bstChar.getRoot() << endl;
//    cout << "Printing the tree in order: " << endl;
//    bstChar.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstChar.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstChar.postOrderPrint();
//
//    //add alphabet to the tree
//    cout << "\nAdding the lowercase alphabet to the tree" << endl;
//    for(int i = 97; i <= 122; i++)
//    {
//        bstChar.insert(i);
//    }
//
//    cout << "The root is: " << bstChar.getRoot() << endl;
//    cout << "Printing the tree in order: " << endl;
//    bstChar.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstChar.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstChar.postOrderPrint();
//
//    cout << "\nAdding A to the tree: " << endl;
//    bstChar.insert('A');
//
//    cout << "The root is: " << bstChar.getRoot() << endl;
//    cout << "Printing the tree in order: " << endl;
//    bstChar.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstChar.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstChar.postOrderPrint();
//
//
//    /* Lab 6 */
//
//    //search for some values
//    cout << "Searching for 5: ";
//    if(bstInt.search(5))
//        cout << "5 was found." << endl;
//    else
//        cout << "5 was not found." << endl;
//
//    cout << "Searching for a: ";
//    if(bstChar.search('a'))
//        cout << "a was found." << endl;
//    else
//        cout << "a was not found." << endl;
//
//
//    cout << "The minimum in the int tree is: " << bstInt.minimum() << endl;
//
//    //remove the root
//    bstInt.remove(bstInt.getRoot());
//
//    //display the new root
//    cout << "The int root is: " << bstInt.getRoot() << endl;
//
//    cout << "\nPrinting the tree in order: " << endl;
//    bstInt.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstInt.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstInt.postOrderPrint();
//
//    cout << "The minimum in the int tree is: " << bstInt.minimum() << endl;
//    cout << "The maximum in the int tree is: " << bstInt.maximum() << endl;
//
//    cout << "The minimum in the char tree is: " << bstChar.minimum() << endl;
//    cout << "The maximum in the char tree is: " << bstChar.maximum() << endl;
//
//
//    cout << "The char root is: " << bstChar.getRoot() << endl;
//
//    //remove two values
//    cout << "Removing two characters" << endl;
//    bstChar.remove('a');
//    bstChar.remove(bstChar.getRoot());
//
//    cout << "Printing the tree in order: " << endl;
//    bstChar.inOrderPrint();
//    cout << "Printing the tree in preorder: " << endl;
//    bstChar.preOrderPrint();
//    cout << "Printing the tree in postorder: " << endl;
//    bstChar.postOrderPrint();
//
//    //display the new root
//    cout << "The char root is: " << bstChar.getRoot() << endl;
//
//    //create a copy of the int tree
//    BST<int> intCopy(bstInt);
//
//
//
//    cout << "\nThe copy of the int tree is: " << endl;
//    intCopy.inOrderPrint();
//    cout << "The original tree is: " << endl;
//    bstInt.inOrderPrint();
//
//    //remove the values from the copied tree
//    cout << "Removing 0 from the copy" << endl;
//    intCopy.remove(0);
//    cout << "The copy of the int tree is: " << endl;
//    intCopy.inOrderPrint();
//    cout << "The original tree is: " << endl;
//    bstInt.inOrderPrint();
//    cout << "Removing 0 from the original tree" << endl;
//    bstInt.remove(0);
//    cout << "The original tree is: " << endl;
//    bstInt.inOrderPrint();
//    cout << "The copy of the int tree is: " << endl;
//    intCopy.inOrderPrint();
//
//    cout << "Removing 3 root values from the copy" << endl;
//    intCopy.remove(intCopy.getRoot());
//    intCopy.remove(intCopy.getRoot());
//    intCopy.remove(intCopy.getRoot());
//    cout << "The copy of the int tree is: " << endl;
//    intCopy.inOrderPrint();
//    cout << "The original tree is: " << endl;
//    bstInt.inOrderPrint();
//    cout << "The root of the copy is: " << intCopy.getRoot() << endl;
//
//    if(intCopy.isEmpty())
//        cout << "The int copy tree is empty." << endl;
//    else
//        cout << "The int copy tree is not empty." << endl;
//
//    //create an empty list to test isEmpty()
//    BST<string> bstString;
//
//    if(bstString.isEmpty())
//        cout << "The string tree is empty." << endl;
//    else
//        cout << "The string tree is not empty." << endl;
//
//    cout << "The size of the int tree is: " << bstInt.getSize() << endl;
//    cout << "The size of the int copy tree is: " << intCopy.getSize() << endl;
//    cout << "The size of the char tree is: " << bstChar.getSize() << endl;
//
//    BST<int> ints;
//    for (int i = 25; i > 0; i--)
//    {
//        ints.insert(i);
//    }
//
//    //should print 25
//    cout << "The size of the new int tree is: " << ints.getSize() << endl;
//    cout << "The height of the int tree is: " << bstInt.getHeight() << endl;
//    cout << "The height of the int copy tree is: " << intCopy.getHeight() << endl;
//
//    return 0;
//}
//
///*
//
//
//
//
//Adding 50 to the tree
//The root is: 50
//Printing the tree in order:
//50
//Printing the tree in preorder:
//50
//Printing the tree in postorder:
//50
//The root is: 50
//Printing the tree in order:
//5 20 38 45 50 200
//Printing the tree in preorder:
//50 5 20 45 38 200
//Printing the tree in postorder:
//38 45 20 5 200 50
//
//Adding 0 to the tree:
//The root is: 50
//Printing the tree in order:
//0 5 20 38 45 50 200
//Printing the tree in preorder:
//50 5 0 20 45 38 200
//Printing the tree in postorder:
//0 38 45 20 5 200 50
//
//Adding H to the tree
//The root is: H
//Printing the tree in order:
//H
//Printing the tree in preorder:
//H
//Printing the tree in postorder:
//H
//
//Adding the lowercase alphabet to the tree
//The root is: H
//Printing the tree in order:
//H a b c d e f g h i j k l m n o p q r s t u v w x y z
//Printing the tree in preorder:
//H a b c d e f g h i j k l m n o p q r s t u v w x y z
//Printing the tree in postorder:
//z y x w v u t s r q p o n m l k j i h g f e d c b a H
//
//Adding A to the tree:
//The root is: H
//Printing the tree in order:
//A H a b c d e f g h i j k l m n o p q r s t u v w x y z
//Printing the tree in preorder:
//H A a b c d e f g h i j k l m n o p q r s t u v w x y z
//Printing the tree in postorder:
//A z y x w v u t s r q p o n m l k j i h g f e d c b a H
//Searching for 5: 5 was found.
//Searching for a: a was found.
//The minimum in the int tree is: 0
//The int root is: 200
//
//Printing the tree in order:
//0 5 20 38 45 200
//Printing the tree in preorder:
//200 5 0 20 45 38
//Printing the tree in postorder:
//0 38 45 20 5 200
//The minimum in the int tree is: 0
//The maximum in the int tree is: 200
//The minimum in the char tree is: A
//The maximum in the char tree is: z
//The char root is: H
//Removing two characters
//Printing the tree in order:
//A b c d e f g h i j k l m n o p q r s t u v w x y z
//Printing the tree in preorder:
//b A c d e f g h i j k l m n o p q r s t u v w x y z
//Printing the tree in postorder:
//A z y x w v u t s r q p o n m l k j i h g f e d c b
//The char root is: b
//
//The copy of the int tree is:
//0 5 20 38 45 200
//The original tree is:
//0 5 20 38 45 200
//Removing 0 from the copy
//The copy of the int tree is:
//5 20 38 45 200
//The original tree is:
//0 5 20 38 45 200
//Removing 0 from the original tree
//The original tree is:
//5 20 38 45 200
//The copy of the int tree is:
//5 20 38 45 200
//Removing 3 root values from the copy
//The copy of the int tree is:
//38 45
//The original tree is:
//5 20 38 45 200
//The root of the copy is: 45
//The int copy tree is not empty.
//The string tree is empty.
//The size of the int tree is: 5
//The size of the int copy tree is: 2
//The size of the char tree is: 26
//The size of the new int tree is: 25
//The height of the int tree is: 4
//The height of the int copy tree is: 1
//
//Process returned 0 (0x0)   execution time : 0.047 s
//Press any key to continue.
//
//*/
//
