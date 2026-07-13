/*
Exercise 3: Pointer-to-Pointer (Double Pointer)
Practice Problem: Declare an integer variable x initialized to 42. Declare an integer pointer p1 that points to x. Declare a double integer pointer (pointer to a pointer) p2 that points to p1. Access and print the initial value of x using the double pointer p2.

Expected Output:

The value accessed via double pointer is: 42
*/
#include <iostream>
using namespace std;

int main(){
    int x = 42;
    int* p1 = &x;
    int*& p2 = p1;

    cout<<*p2<<endl;

    return 0;
}