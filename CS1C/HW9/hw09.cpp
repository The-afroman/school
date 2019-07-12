#include "shapes.h"
using std::cout;
using std::endl;

int main()
{
    //insantiate shapes
    Rectangle r1(5,10);
    Triangle t1(10,10,10);
    
    //output
    cout << "Rectangle: \n";
    cout << "Area: " << r1.calcArea() << endl; 
    cout << "Perimeter: " << r1.calcPerimeter() << endl << endl;

    cout << "Triangle: \n";
    cout << "Area: " << t1.calcArea() << endl; 
    cout << "Perimeter: " << t1.calcPerimeter() << endl;

    return 0;
}