/*
Exercise 8: Simple Pass-by-Pointer Function
Practice Problem: Write a function named increment_value that 
takes an integer pointer as its only argument. Inside the function, 
increment the value that the pointer points to by 10. In main, 
call the function using the address of an integer variable and 
print the updated value.

Expected Output:

Before increment: 50
After increment: 60
*/

#include <iostream>
using namespace std;


int increment_value(int* ptr){
    (*ptr)+=10;
    return 0;

}

int main(){
    int some = 50;
    int* psome= &some;
    cout<< "Before increment: "<<*psome<<endl;
    increment_value(psome);
    cout<< "After increment: "<<*psome<<endl;



    return 0;
}