/*
    Corey Russ
    Lab 5
    CIS 22c
    BSTTest.cpp
*/

#include "BST.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string intInputString;
    int searchInput;
    int input;
    int addValue;

    fin.open("input.txt");
    fout.open("output.txt");
    if(fin.fail())
    {
        cout << "Could not open input file.";
        exit(-1);
    }
    else
    {
        while(!fin.eof())
        {
            //get the line with numbers to create the tree
            getline(fin, intInputString);
            istringstream iss(intInputString);

            //create pointer to the tree
            BST<int>* tempTree = new BST<int>;

            //split the string into seperate numbers
            while(iss >> input)
            {
                tempTree->insert(input);
            }
            tempTree->preOrderPrint(fout);
            tempTree->inOrderPrint(fout);

            //get the value to search for
            fin >> searchInput;

            //check if the value to search for is in the tree
            if(tempTree->search(searchInput))
            {
                fout << searchInput << " was found in the BST" << endl;
                tempTree->remove(searchInput);
            }
            else
                fout << searchInput << " was not found in the BST" << endl;

            //get the value to add
            fin >> addValue;

            //add the new value and print the tree
            tempTree->insert(addValue);
            tempTree->postOrderPrint(fout);

            //print the root
            fout << "The root of the tree is " << tempTree->getRoot() << endl;

            //get the maximum value in the tree
            fout << "The maximum value is " << tempTree->maximum() << endl;

            //get the minimum value in the tree
            fout << "The minimum value is " << tempTree->minimum() << endl;

            //get the size of the BST
            fout << "The size of the BST is " << tempTree->getSize() << endl;

            //get the height of the BST
            fout << "The height of the BST is " << tempTree->getHeight() << endl;

            fout << endl;

            //clear the buffer
            fin.ignore(1000, '\n');

        }
        cout << "File finished!" << endl;
    }
    fin.close();
    fout.close();
}
