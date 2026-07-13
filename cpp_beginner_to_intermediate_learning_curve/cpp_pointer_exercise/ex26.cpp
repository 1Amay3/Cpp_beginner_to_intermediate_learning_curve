/*
Exercise 26: Array of Pointers
Practice Problem: Declare five individual integer variables (e.g., n1, n2, …). 
Declare an array of 5 integer pointers (int* array_of_ptrs[5]). 
Make each element in the array of pointers point to one of the five individual integer variables. 
Use the array of pointers to print all five integer values.

Given:

int n1 = 10;
int n2 = 20;
int n3 = 30;
int n4 = 40;
int n5 = 50;
Expected Output:

Values via array of pointers: 10 20 30 40 50
*/
#include <iostream>
using namespace std;

int main(){

    int n1 = 10;
    int n2 = 20;
    int n3 = 30;
    int n4 = 40;
    int n5 = 50;

    int* arr[]{&n1,&n2,&n3,&n4,&n5};
    cout<<"Value via array of pointers: ";
    for(int** i = arr;i<(arr+5);i++){
        cout<<**i<<" ";

    }

    return 0;
}