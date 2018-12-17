/**

* Corey Russ

* CIS 22C

* Polynomial.cpp

*/
#include "Polynomial.h"
#include <iomanip>

Polynomial::Polynomial()
{

}

Polynomial::~Polynomial()
{

}

void Polynomial::insertTerm(int exponent, double coefficient)
{
    Term t = Term(coefficient, exponent);
    poly.insert_tail(t);
}

double Polynomial::evaluateTerm(Term t, double value)
{
    if(poly.get_length() == 0)
    {
        cout << "The polynomial is empty.";
        return 0;
    }
    double expoSum = value;
    double sum;

    for(int j = 1; j <= t.getExponent() - 1; j++)
    {
        expoSum *= value;
    }
    sum = expoSum * t.getCoefficient();
    return sum;
}

double Polynomial::evaluate(double value)
{
    int len = poly.get_length();
    if(len == 0)
    {
        cout << "The polynomial is empty.";
        return 0;
    }
    else
    {
        poly.start_cursor();
        double sum;

        for(int i = 0; i < len; i++)
        {
            sum += evaluateTerm(poly.get_cursor(), value);
            poly.move_cursor();
        }
        return sum;
    }
}

void Polynomial::print()
{
    int len = poly.get_length();
    if(len == 0)
    {
        cout << "The polynomial is empty.";
        return;
    }
    else
    {
        poly.start_cursor();

        for(int i = 0; i < len - 1; i++)
        {
            cout << fixed << setprecision(1)
            << poly.get_cursor().getCoefficient()
            << "x"
            << poly.get_cursor().getExponent()
            << " + ";
            poly.move_cursor();
        }
        cout << fixed << setprecision(1)
        << poly.get_cursor().getCoefficient()
        << "x"
        << poly.get_cursor().getExponent();
    }

}
