/*
    Corey Russ
    Lab 7
    CIS 22c
    HashTable.cpp
*/
#include "Hashtable.h"
#include <iomanip>

HashTable::HashTable()
{
    for(int i = 0; i <TABLE_SIZE; i++)
    {
        Table[i] = new Node();
    }
}

HashTable::~HashTable()
{

}

void HashTable::addItem(string title, string author, double isbn)
{
    Nodeptr N = new Node(title, author, isbn);
    int index = hash(title);
    if(Table[index]->title == "")
        Table[index] = N;
    else
    {
        Nodeptr temp = Table[index];
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = N;
    }
}

int HashTable::hash(string key)
{
    int index, sum = 0, keyLength = 0;
    keyLength = key.length();
    for(int i = 0; i < keyLength; i++)
        sum += (int) key[i]; //summing the ASCII values for each character in the string
    index = sum % TABLE_SIZE; //dividing the summed ASCII values by 35 && storing remainder as my index
    return index;
}

int HashTable::numItemsAtIndex(int index)
{
    Nodeptr temp = Table[index];
    int count = 0;
    if(temp->title == "")
        return count;
    else
        while(temp)
        {
            count++;
            temp = temp->next;
        }
    return count;
}

void HashTable::printTable()
{
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        cout << "------------------------------------" << endl << endl;
        cout << "Index " << i << ":" << endl;
        cout << "Title: " << Table[i]->title << endl;
        cout << "Author: " << Table[i]->author << endl;
        cout << fixed << setprecision(0);
        cout << "ISBN: " << Table[i]->isbn << endl;
        cout << "Number of values at this index: " << numItemsAtIndex(i) << endl;
    }
    cout << "------------------------------------" << endl << endl;
}

int HashTable::findAuthor(string title)
{
    int index = hash(title);
    Nodeptr temp = Table[index];
    while(temp)
    {
        if(temp->title == title)
        {
             cout << "The author of " << title << " is " << temp->author;
             return index;
        }
        else
            temp = temp->next;
    }
    cout << "The title is not stored in the database." << endl;
    return -1;
}

void HashTable::printBucket(int index)
{
    Nodeptr temp = Table[index];
    if(temp->title != "")
    {
        cout << "\n\nThe values stored at index " << index << " are:" << endl << endl;
        while(temp)
        {
            cout << "Title: " << temp->title << endl;
            cout << "Author: " << temp->author << endl;
            cout << fixed << setprecision(0);
            cout << "ISBN: " << temp->isbn << endl << endl;
            temp = temp->next;
        }
    }
    else
        cout << "The bucket at index "<< index << " is empty." << endl;
}

void HashTable::removeItem(string key)
{
    int index = hash(key);
    Nodeptr temp = Table[index];


    if(temp->title == "")
    {
        cout << "Cannot remove the item. The bucket is empty.";
    }
    else if(temp->title != "" && !temp->next)
    {
        if(key == temp->title)
        {
            delete temp;
            Table[index] = new Node();
        }
        else
            cout << "Could not find " << key << endl;

    }
    else if(temp->title != "" && temp->next)
    {
        if(key == temp->title)
        {
            Table[index] = temp->next;
            delete temp;
        }
        else
        {
            while(temp->next->title != key && temp->next)
            {
                    temp = temp->next;
            }
            if(temp->next->title == key)
            {
                if(temp->next->next)
                {
                    delete temp->next;
                    temp->next = temp->next->next;
                }
                else
                {
                    delete temp->next;
                    temp->next = NULL;
                }
            }
            else
                cout << "Could not find " << key;
        }
    }
}




