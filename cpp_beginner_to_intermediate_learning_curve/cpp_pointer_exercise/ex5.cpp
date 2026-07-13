/*
Exercise 5: Pointer Arithmetic (Index Access)
Practice Problem: Declare an integer array named scores with elements 
{85, 90, 78, 95, 88}. Declare a pointer score_ptr and point it to the first element.
Access and print the third element (which is 78) of the array using pointer 
arithmetic in the form *(ptr + N).
Given:

int scores[] = {85, 90, 78, 95, 88};

Expected Output:

The value of the third element is: 78*/

#include <iostream>
using namespace std;

int main(){

    int scores[5]={85,90,78,95,88};
    int* ptr=&scores[0];
    cout<<"The value of the third element is : "<<*(ptr+2)<<endl;

    return 0;
}