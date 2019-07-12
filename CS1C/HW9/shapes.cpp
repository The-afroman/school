#include "shapes.h"


Rectangle::Rectangle(int l, int w) : length{l}, width{w}
{}

float Rectangle::calcArea()
{return(length*width);}


float Rectangle::calcPerimeter()
{return(length*2 + width*2);}

Triangle::Triangle(int s1, int s2, int s3) : base{s1}, side1{s2}, side2{s3}
{}

float Triangle::calcArea()
{
    //use heron's formula A = sqrt(s(s-a)(s-b)(s-c))
    float s = 0.5*Triangle::calcPerimeter();
    return std::sqrt(s*(s-side1)*(s-side2)*(s-base));
}

float Triangle::calcPerimeter()
{return(base + side1 + side2);}