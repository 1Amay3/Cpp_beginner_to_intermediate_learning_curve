/*
Exercise 14: Copying an Array
Practice Problem: Write a function named copy_array that takes three arguments: 
a destination integer array, a source integer array, and the size of the arrays.
The function must use pointers to copy the contents from the source array into 
the destination array.

Given:

int source[] = {10, 20, 30, 40, 50};
Expected Output:

Destination array contents: 10 20 30 40 50
*/
#include <iostream>
using namespace std;

int copy_array(int arr1[],int arr2[],int size){
    int* mover=&arr1[0];
    int* getter=&arr2[0];
    for(int i=1;i<=size;i++){
        *getter=*mover;
        //cout<<*mover<<endl;
        //cout<<arr2[i-1];
        mover++;
        getter++;
    }
    return 0;
}

int main(){
    int source[] = {10, 20, 30, 40, 50};
    int dest[5];
    cout<<"Destination array contents: ";
    copy_array(source,dest,sizeof(source)/sizeof(source[0]));
    for(int i = 0;i<sizeof(dest)/sizeof(dest[0]);i++){
        cout<<dest[i]<<" ";
    }   
    return 0;
}