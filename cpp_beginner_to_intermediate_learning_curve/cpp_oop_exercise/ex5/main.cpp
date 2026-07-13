/*
Exercise 5: Default/Parameterized Constructor
Practice Problem: Implement the Rectangle class (from Exercise 1). 
This time, include two public constructors: a default constructor that sets both length and 
width to 1, and a parameterized constructor that allows setting custom values for length and width.

Expected Output:

Custom Rectangle created (12x4).
R1 Area: 48
Default Rectangle created (1x1).
R2 Area: 1
*/
#include "rectangle.hpp"

int main(){
    Rectangle r1;
    Rectangle r2(12,4);
    cout<<"Custom Rectangle created (12x4)\n"<<"R1 Area: "<<r2.get_area()<<"\n";
    cout<<"Default Rectangle created (1x1)\n"<<"R2 Area: "<<r1.get_area()<<"\n";
    return 0;
}