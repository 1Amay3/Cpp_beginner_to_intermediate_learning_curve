/*
Exercise 23: Pointer to Struct
Practice Problem: Define a structure named Rectangle with two integer members: 
length and width. Declare a Rectangle variable, 
initialize its members, and then declare a pointer to that structure. 
Access and modify the structure members using the arrow operator (->). 
Print the final dimensions.

Expected Output:

Original dimensions: 10 x 5
New dimensions: 15 x 7
*/
#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;
};
int main(){

    Rectangle chess{0,0};
    Rectangle* ptr=&chess;
    cout<<"Original dimensions: "<<ptr->length<<"x"<<ptr->width<<endl;
    ptr->length=8;
    ptr->width=8;
    cout<<"Modified dimensions: "<<ptr->length<<"x"<<ptr->width<<endl;


    return 0;
}