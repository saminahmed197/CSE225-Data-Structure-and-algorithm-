#include "Triangle.h"
#include <cmath>

Triangle::Triangle()
{
    this->side_1=0;
    this->side_2=0;
    this->side_3=0;
}


Triangle::Triangle(double side_1, double side_2, double side_3)
{
    this->side_1=side_1;
    this->side_2=side_2;
    this->side_3=side_3;
}

void Triangle::setter_of_side_1(double side_1)
{
    this->side_1=side_1;
}

void Triangle::setter_of_side_2(double side_2)
{
    this->side_2=side_2;
}

void Triangle::setter_of_side_3(double side_3)
{
    this->side_3=side_3;
}

double Triangle::getter_of_side_1()
{
    return side_1;
}

double Triangle::getter_of_side_2()
{
    return side_2;
}

double Triangle::getter_of_side_3()
{
    return side_3;
}

double Triangle::getArea()
{
    double semi_perimeter=getPerimeter()/2;
    double area_of_triangle=sqrt(semi_perimeter*(semi_perimeter-side_1)*(semi_perimeter-side_2)*(semi_perimeter-side_1));
    return area_of_triangle;
}

double Triangle::getPerimeter()
{
    double perimeter= side_1+side_2+side_3;
    return perimeter;
}

