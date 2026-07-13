/*
Exercise 4: Pointer Arithmetic (Increment)
Practice Problem: Declare an integer array named data with the elements {10, 20, 30, 40, 50}.
Declare an integer pointer data_ptr and point it to the first element of the array. 
Use pointer increment (ptr++) and the dereference operator to traverse the array and
 print all five elements.

Given:

int data[] = {10, 20, 30, 40, 50};
*/
#include <iostream>

using namespace std;
int main(){
    int data[5]={10,20,30,40,50};
    int* data_ptr = &data[0];
    cout<<"Elements using pointer increment: ";
    for(int i = 0; i< 4;i++){
        cout<<*data_ptr<<", ";
        (data_ptr)++;
    }
    cout<<*data_ptr<<endl;
    data_ptr=nullptr;


    return 0;
}

