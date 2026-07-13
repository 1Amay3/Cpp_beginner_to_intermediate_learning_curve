/*
Exercise 7: NULL Pointer Check
Practice Problem: Declare an integer pointer named safe_ptr and initialize it 
to nullptr. Write a conditional statement to check if the pointer is null 
before attempting to dereference it. If it is null, 
print “Pointer is null, cannot dereference.” 
If it is not null, initialize a variable, assign its address to the pointer, 
and print the dereferenced value.

Expected Output:

Pointer is null, cannot dereference.
Pointer is now valid. Dereferenced value: 77
*/

#include <iostream>
using namespace std;

int check(int* ptr){
    if(ptr==nullptr){
            cout<<"Pointer is null, cannot dereference"<<endl;
        }
        else{
            
            cout<<"Pointer is now valid, Dereferenced value : "<<*ptr<<endl;
        }
    return 0;
}
int main(){

    int* safe_ptr=nullptr;
    check(safe_ptr);
    
    int var = 77;
    safe_ptr= &var;
    check(safe_ptr);

    return 0;
}