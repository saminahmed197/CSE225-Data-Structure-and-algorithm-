#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

class Fraction{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int,int);
    void setter_of_numerator(int);
    void setter_of_denominator(int);
    int getter_of_numerator();
    int getter_of_denominator();
};


#endif // FRACTION_H_INCLUDED
