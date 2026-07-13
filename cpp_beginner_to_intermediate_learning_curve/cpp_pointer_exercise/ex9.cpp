/*
Exercise 9: Size Comparison
Practice Problem: Declare an integer variable i and an integer pointer ptr.
Use the sizeof() operator to print the size (in bytes) of the i variable 
and the size of the ptr pointer on your system. Note and discuss the difference 
between the two sizes.

Expected Output:

Size of an int variable: 4 bytes
Size of an int pointer (address): 8 bytes

*/

#include <iostream>
using namespace std;

int main(){

    int i;
    int* ptr;
    cout<<"Size of an int variable: "<<sizeof(i)<<" Bytes"<<endl;
    cout<<"Size of an int pointer: "<<sizeof(ptr)<<" Bytes"<<endl;

    return 0;
}