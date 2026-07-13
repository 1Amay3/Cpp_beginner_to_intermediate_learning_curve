/*
Exercise 22: Constant Pointer
Practice Problem: Declare an integer variable x initialized to 5. 
Declare a constant pointer to an integer (int* const) named const_ptr and 
initialize it to point to x. Use the pointer to successfully change the 
value of x to 10. Then, declare a second integer y and attempt to make const_ptr 
point to y. Observe and explain the resulting compilation error.

Given:

int x = 5;
int y = 25;
Expected Output:

x after modification via pointer: 10
*/
#include <iostream>
using namespace std;



int main(){
    int x = 5;
    int* const const_ptr = &x;
    *const_ptr = 10;
    cout<<"x after modification by pointer: "<<x<<endl;
    int y;
    //uncomment for error expected// const_ptr=&y;
    return 0;
}