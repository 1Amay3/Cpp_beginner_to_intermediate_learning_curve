/*
xercise 11: Reverse Array
Practice Problem: Write a program to print the elements of an integer array 
{1, 2, 3, 4, 5} in reverse order using only pointer notation and arithmetic. 
You must not use the array index operator ([]).

Given:

int numbers[] = {1, 2, 3, 4, 5};
Expected Output:

Elements in reverse order: 5 4 3 2 1
*/

#include <iostream>
using namespace std;

void rev(int* arr, int size){
    //int size = sizeof(*arr)/sizeof(arr[0]);
    int* start = arr;
    int* end = arr+size-1;
    while(end>=start){
        cout<<" "<<*end<<endl;
        end--;
    }
    return;
}

int main(){

    int arr[]={1,2,3,4,5};
    int* arr_ptr = arr;
    cout<<"Elements in reverse order: "<<endl;
    rev(arr_ptr,sizeof(arr)/sizeof(arr[0]));

    return 0;
}