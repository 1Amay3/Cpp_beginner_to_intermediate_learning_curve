/*
Exercise 29: Reallocation Simulation
Practice Problem: Dynamically allocate a small integer array (size 5) and initialize it. \
Write a function named resize_array that simulates reallocation by: 1) creating a new, 
larger array (size 10) on the heap, 2) using pointers to copy the contents of the old array 
to the new array, and 3) correctly deleting the old array. Return the pointer to the new array.

Given:
int old_size = 5;
int new_size = 10;
Expected Output:

Original array (size 5): 1 2 3 4 5 
Resized array (size 10): 1 2 3 4 5 99 99 99 99 99
*/
#include <iostream>
using namespace std;

int* resize_array(int* arr1,int old_size, int new_size){
    int* arr2 = new int[new_size];
    int* walker=&arr1[0];
    for (int* i = arr2;i<arr2+new_size;i++){
        if(i<arr2+old_size){
            *i = *walker;
        
            walker++;
        }else
        { 
            *i = 99;
        }
    }
    delete[] arr1;
    arr1=nullptr;
    //delete walker;
    walker = nullptr;
    //cout<<arr2<<","<<walker<<","<<arr1<<endl;
    return arr2;
}

int main(){
    int old_size = 5;
    int new_size = 10;
    int* arr1 = new int[old_size]{1,2,3,4,5};
    cout<<"Original array (size "<<old_size<<"): ";
    for(int i=0;i<old_size;i++){
        cout<<*(arr1+i)<<" ";
    }
    int* res = resize_array(arr1,old_size,new_size);
    cout<<endl<<"Resized array (size "<<new_size<<"): ";
    for(int i=0;i<new_size;i++){
        cout<<*(res+i)<<" ";
    }
    arr1=nullptr;
    delete[] res;
    return 0;

}
