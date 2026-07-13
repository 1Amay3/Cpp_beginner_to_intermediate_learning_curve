/*
Exercise 16: Sub-array Printing
Practice Problem: Given an integer array, a starting index (start), 
and an ending index (end), 
write a program that uses a pointer to print only 
the elements in that specific sub-range (inclusive of start, exclusive of end).

Given:

int data[] = {10, 20, 30, 40, 50, 60};
int start_index = 2; // Element 30
int end_index = 5;   // Up to element 50 (exclusive)
Expected Output:

Sub-array elements: 30 40 50
*/

#include <iostream>
using namespace std;

void crop(int arr[],int l,int r){
    int* ptr = arr;
    cout<<"Sub-array elemets: ";
    for(int* i = ptr+l;i<ptr+r;i++){
        cout<<*i<<" ";
    }


}


int main(){

    int data[] = {10, 20, 30, 40, 50, 60};
    int start_index = 2; // Element 30
    int end_index = 5;   // Up to element 50 (exclusive)
    crop(data,start_index,end_index);
    return 0;
}