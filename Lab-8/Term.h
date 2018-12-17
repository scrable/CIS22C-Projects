#ifndef TERM_H_
#define TERM_H_

using namespace std;

class Term
{
    private:
        double coefficient;
        int exponent;
    public:
        Term(): coefficient(0.0), exponent(0) {};
        Term(double newCoefficient, int newExponent): coefficient(newCoefficient), exponent(newExponent){};
        double getCoefficient() { return coefficient; }
        int getExponent() { return exponent; }
        void setCoefficient(double c) { coefficient = c; }
        void setExponent(int e) { exponent = e; }

};

#endif /* TERM_H_ */
