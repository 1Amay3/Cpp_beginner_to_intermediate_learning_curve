/*
Exercise 19: Function Pointer Declaration
Practice Problem: Write a simple function add that takes two integers and 
returns their sum. In main, declare a function pointer that can point to a function 
with this signature. Assign the add function to this pointer and then call 
the add function using the function pointer.

Given:

int a = 10;
int b = 5;
Expected Output:

Result 1 (10 + 5): 15
*/
#include <iostream>
using namespace std;

int sum_2(int a,int b){
    return a+b;
}



int main(){
    int (*adder)(int,int);
    adder = sum_2;
    int a=10;
    int b=5;
    
    cout<<"Resule 1(10+5): "<<(*adder)(a,b)<<endl;

    return 0;
}
