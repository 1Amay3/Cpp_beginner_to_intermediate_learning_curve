/*
Exercise 13: 2D Array Traversal
Practice Problem: Declare a small two-dimensional integer array, 
for example, a 3×3 array initialized with values.
Write a program that uses an integer pointer to access and 
print all elements of the 2D array, treating it as a contiguous block of memory.
You must use pointer arithmetic, not standard bracket indexing ([][]).

Given:

int matrix[3][3] = {
     {1, 2, 3},
     {4, 5, 6},
     {7, 8, 9}
};
Expected Output:

2D Array elements accessed contiguously:
1 2 3 
4 5 6 
7 8 9
*/
#include <iostream>
using namespace std;

int main(){

    int matrix[3][4] = {
     {1, 2, 3, 3},
     {4, 5, 6, 4},
     {7, 8, 9, 5}
};
    int cols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    int rows=sizeof(matrix)/sizeof(matrix[0]);
    int size=rows*cols;
    int* ptr=&matrix[0][0];

    cout<<"2D Array elements accessed contiguously: "<<endl;

    for(int i = 0; i < size ; i++){
        cout<<*ptr<<" ";
        if(i%cols==cols-1){
            cout<<endl;
        }
        ptr++;
    }
    

    return 0;
}

