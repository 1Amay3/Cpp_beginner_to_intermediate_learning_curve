/*
Exercise 24: Dynamic Allocation (Single Variable)
Practice Problem: Use the "new" operator to dynamically allocate memory for a 
single float variable on the heap. Store the address in a float pointer. 
Initialize the allocated memory to the value 3.14. Print the value, and 
then use the delete operator to deallocate the memory.

Sample Output:

Dynamically allocated float value: 3.14
Address on heap: 0x61499874f920
*/

#include <iostream>
using namespace std;

int main(){
    
    float* h_float = new float(3.14);
    cout<<"DYnamically alloacted float value: "<<*h_float<<endl;
    cout<<"Address on heap: "<<h_float<<endl;
    delete h_float;

    h_float=nullptr;

    return 0;

}