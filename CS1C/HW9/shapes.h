#include <iostream>
#include <math.h>
class Shape
{
public:
    virtual float calcPerimeter() = 0;
    virtual float calcArea() = 0;
};

class Rectangle : Shape
{
public:
    Rectangle(int l, int w);
    float calcPerimeter();
    float calcArea();
private:
    int length;
    int width;
};

class Triangle : Shape
{
public:
    Triangle(int s1, int s2, int s3);
    float calcPerimeter();
    float calcArea();
private:
    int base;
    int side1;
    int side2;
};