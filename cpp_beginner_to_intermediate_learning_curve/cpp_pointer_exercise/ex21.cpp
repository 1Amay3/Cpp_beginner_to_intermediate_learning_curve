/*
Exercise 21: Pointer to Constant Data
Practice Problem: Write a function named print_constant_value that accepts 
a pointer to a constant integer (const int*). Inside the function, 
print the value pointed to. In main, attempt to call the function and 
then try to use the pointer inside the function to modify the pointed-to value. 
Observe and explain the resulting compilation error.

Given:

int data = 100;
Expected Output:

Value via const pointer: 100
Value via const pointer: 200
*/

#include <iostream>
using namespace std;

void print_constant_value(const int* a){
    cout<<"Value via const pointer: "<<*a<<endl;
    //*a=200;

}



int main(){
    int data = 100;
    int* ptr=&data;
    print_constant_value(ptr);
    *ptr=200;
    print_constant_value(ptr);


    return 0;
}