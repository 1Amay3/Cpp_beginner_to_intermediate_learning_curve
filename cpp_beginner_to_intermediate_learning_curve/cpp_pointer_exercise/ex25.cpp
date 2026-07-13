/*
Exercise 25: Dynamic Allocation (Array)
Practice Problem: Use the new[] operator to dynamically allocate an integer array 
of size 8. Use a pointer to fill the array with the values 10, 20, 30, …, 80. 
Print all values using pointer arithmetic traversal. 
Finally, use the delete[] operator to correctly deallocate the entire array.

Expected Output:

Dynamically allocated array: 10 20 30 40 50 60 70 80
*/

#include <iostream>
using namespace std;

int main(){

    int* arr=new int[8]{10,20,30,40,50,60,70,80};
    cout<<"Dynamically allotted array: ";
    for(int i=0;i<8;i++){
        cout<<*arr<<" ";
        arr++;
    }
    arr-=8;
    delete[] arr;
    arr=nullptr;

    return 0;
}