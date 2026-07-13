/*
Exercise 10: Array Summation
Practice Problem: Write a program to calculate and print the sum of all elements 
in a given integer array {1, 5, 10, 15, 20} using only pointer arithmetic 
to access the elements. Do not use the array index operator ([]).

Expected Output:

The sum of array elements is: 51
*/
#include <iostream>
using namespace std;

int main(){

    int arr[]={1,5,10,15,20};
    int* ptr=arr;
    int out = 0;
    for(int i = 0; i<sizeof(arr)/sizeof(*ptr);i++){
        out+=*ptr;
        ptr+=1;
    }
    cout<<"The sum of array elements is: "<<out<<endl;

    return 0;
}