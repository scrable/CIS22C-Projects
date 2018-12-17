#include <iostream>

#include "Polynomial.h"

using namespace std;

int main()
{

    Polynomial p;
    p.insertTerm(4, 6);
    p.insertTerm(3, 2);
    p.insertTerm(2, 10);
    p.insertTerm(1, 7);

    cout << "\nThe sum for polynomial\n";
    p.print();
    cout << "\nusing x = 3 is " << p.evaluate(3) << endl;

    Polynomial poly;
    poly.insertTerm(10, 7);
    poly.insertTerm(3, 1);
    poly.insertTerm(2, 0);
    poly.insertTerm(1, 8);

    cout << "\nThe sum for polynomial\n";
    poly.print();
    cout << "\nusing x = 6 is " << poly.evaluate(6) << endl;

    Polynomial poly2;
    poly2.insertTerm(7, 1);
    poly2.insertTerm(4, 3);
    poly2.insertTerm(3, 6);
    poly2.insertTerm(2, 18);

    cout << "\nThe sum for polynomial\n";
    poly2.print();
    cout << "\nusing x = 16 is " << poly2.evaluate(16) << endl;

    return 0;
}

/*

The sum for polynomial
6.0x4 + 2.0x3 + 10.0x2 + 7.0x1
using x = 3 is 651.0

The sum for polynomial
7.0x10 + 1.0x3 + 0.0x2 + 8.0x1
using x = 6 is 423263496.0

The sum for polynomial
1.0x7 + 3.0x4 + 6.0x3 + 18.0x2
using x = 16 is 268661248.0

Process returned 0 (0x0)   execution time : 0.007 s
Press any key to continue.

*/