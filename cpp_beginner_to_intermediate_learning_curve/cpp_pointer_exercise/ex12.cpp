/*
Exercise 12: Finding Minimum
Practice Problem: Write a function named find_min_ptr that takes an integer array 
and its size as input, and returns a pointer to the smallest element in that array.
In the main function, call this function and use the returned pointer 
to print the minimum value.

Given:

int data[] = {45, 12, 67, 8, 33};
Expected Output:

The smallest element is: 8
*/

#include <iostream>
using namespace std;

int* find_min_ptr(int arr[], int size){
    int* out;
    int* start = arr;
    int* end = start+size;
    out = start;
    while(start<end){
        if (*out>*start){
            out=start;
        }
        start++;
    } 
    return out;

}

int main(){
    int data[]={45,12,67,8,33};
    cout<<"The smallest element is: "<<*find_min_ptr(data,sizeof(data)/sizeof(data[0]));
    return 0;
}