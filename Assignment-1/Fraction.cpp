#include "Fraction.h"

Fraction::Fraction()
{
    this->numerator=0;
    this->denominator=1;
}

Fraction::Fraction(int numerator, int denominator)
{
    this->numerator=numerator;
    this->denominator=denominator;
    if(denominator==0)
        {
            this->denominator=1;
        }
}

void Fraction::setter_of_numerator(int numerator)
{
    this->numerator=numerator;
}

void Fraction::setter_of_denominator(int denominator)
{
    this->denominator=denominator;
}

int Fraction::getter_of_numerator()
{
    return numerator;
}

int Fraction::getter_of_denominator()
{
    return denominator;
}

