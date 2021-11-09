#include <iostream>
#include "Triangle.h"
#include "Fraction.h"
using namespace std;

int main()
{
    Triangle tri_1(1.2,1.3,1.4);
    Triangle tri_2;
    cout<<"Area of the 1st triangle: "<<tri_1.getArea()<<endl;
    cout<<"Perimeter of the 1st triangle: "<<tri_1.getPerimeter()<<endl;

    cout<<"Area of the 2nd triangle: "<<tri_2.getArea()<<endl;
    cout<<"Perimeter of the 2nd triangle: "<<tri_2.getPerimeter()<<endl;

    Fraction fra_1(3,5);
    Fraction fra_2;
    cout<<"\nNumerator of the 1st fraction is: "<<fra_1.getter_of_numerator()<<endl;
    cout<<"Denominator of the 1st fraction is: "<<fra_1.getter_of_denominator()<<endl;
    cout<<"First fraction is: "<<fra_1.getter_of_numerator()<<"/"<<fra_1.getter_of_denominator()<<endl;

    cout<<"\nNumerator of the 2nd fraction is: "<<fra_2.getter_of_numerator()<<endl;
    cout<<"Denominator of the 2nd fraction is: "<<fra_2.getter_of_denominator()<<endl;
    cout<<"Second fraction is: "<<fra_2.getter_of_numerator()<<"/"<<fra_2.getter_of_denominator()<<endl;
    return 0;
}
