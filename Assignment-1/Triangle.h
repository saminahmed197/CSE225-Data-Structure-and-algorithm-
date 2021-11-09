#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
class Triangle
{
private:
    double side_1;
    double side_2;
    double side_3;
public:
    Triangle();
    Triangle(double,double,double);
    void setter_of_side_1(double);
    void setter_of_side_2(double);
    void setter_of_side_3(double);
    double getter_of_side_1();
    double getter_of_side_2();
    double getter_of_side_3();
    double getArea();
    double getPerimeter();
};

#endif //TRIANGLE_H_INCLUDED

