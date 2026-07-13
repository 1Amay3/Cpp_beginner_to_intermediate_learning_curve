/*
Exercise 30: Friend Function
Practice Problem: Create a class Box with private members length and width.
Implement a non-member function named calculate_volume(const Box& b, int height) 
that calculates the volume (l * w * h). To allow this external function to access 
the private length and width, declare it as a friend function inside the Box class.

Expected Output:

Box dimensions: 10x5x2
Calculated Volume (via Friend Function): 100

*/
#include "box.hpp"

int main(){
    Box b1(10,5);
    int h = 2;
    cout<<"Box dimensions: "<<b1.dim_l()<<"x"<<b1.dim_w()<<"x"<<h<<"\n";
    cout<<"Calculated volume( via friend function): "<<calculate_volume(b1,h)<<endl;
    return 0;
}