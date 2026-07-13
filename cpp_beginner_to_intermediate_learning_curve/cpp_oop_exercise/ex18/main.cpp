/*
Exercise 18: Shape Hierarchy With Virtual Area
Practice Problem: Create a base class Shape with a method area() that returns 0.0. Derive two classes, Square (with private side member) and Triangle (with private base and height members). Both derived classes must override area() to perform the correct area calculation. For Square, return side *side For Triangle, return (base * side)/2.

Expected Output:

Square Area (5x5): 25
Triangle Area (4x6): 12
Generic Shape Area: 0
*/
#include "shape.hpp"

int main(){
    Shape gen;
    Square five(5);
    Triangle t1(4,6);
    cout<<"Square Area (5x5): "<<five.area()<<endl;
    cout<<"Triangle Area (4x6): "<<t1.area()<<endl;
    cout<<"Generic Shape Area: "<<gen.area()<<endl;
    
    


    return 0;
}