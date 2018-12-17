/*
    Corey Russ
    Lab 3
    CIS 22c
    Palindrome.cpp
*/

#include "Queue.h"
#include "stack.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    Stack s;
    Queue q;
    int length = 0;
    string word;

    fin.open("palindrome.txt");
    if(!fin.fail())
    {
        cout << "Palindrome.txt opened successfully.\n";
    }
    else
    {
        cout << "Palindrome.txt failed to open.\n";
        return 0;
    }
    while (getline(fin, word))
    {
        cout << word;

        //get the length of the sentence
        length = word.length();

        //run through the whole sentence per char
        for(int i = 0; i < length; i++)
        {
            //running isalpha here will ignore spaces
            //and only push chars to stack & queue
            if(isalpha(word[i]))
            {
                //convert the char to lower for comparison
                //we dont need case specific comparison
                word[i] = tolower(word[i]);
                string tempWord;
                tempWord = (word[i]);

                //push the char to the queue and stack
                q.enqueue(tempWord);
                s.push(tempWord);
            }
        }
        bool palindrome = true;
        while(palindrome && s.get_size() != 0 && q.get_size() != 0)
        {
            //if the elements are not equal
            if(s.get_top() != q.get_front())
            {
                palindrome = false;
            }
            //if the elements are equal, remove the front and top
            //so we can compare the next element in each structure
            //next time the loop runs
            else
            {
                s.pop();
                q.dequeue();
            }
        }
        if(palindrome)
            cout << " is a palindrome." << endl;
        else
            cout << " is not a palindrome." << endl;

        //clear the queue and stack
        //of any remaining elements
        while(s.get_size() != 0)
            s.pop();
        while(q.get_size() != 0)
            q.dequeue();
    }
    fin.close();
    return 0;
}
