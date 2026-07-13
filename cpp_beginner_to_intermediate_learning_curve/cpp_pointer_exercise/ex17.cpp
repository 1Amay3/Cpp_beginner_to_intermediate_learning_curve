/*
Exercise 17: Pass-by-Pointer (Swap)
Practice Problem: Write a function called swap that takes two integer pointers as arguments. 
The function must swap the values stored in the memory locations that these pointers 
point to. In main, declare two integers and call swap using their addresses.

Given:

int a = 10;
int b = 20;
Expected Output:

Before swap: a = 10, b = 20
After swap: a = 20, b = 10
*/

#include <iostream>
using namespace std;
void swap(int* s1, int* s2){
    int mid=*s1;
    *s1=*s2;
    *s2=mid;
}

int main(){
    int a = 10;
    int b = 20;
    int* pa = &a;
    int* pb = &b;
    cout<<"Before swap: a = "<<*pa<<", b = "<<*pb<<endl;

    swap(pa,pb);
    cout<<"After swap: a = "<<*pa<<", b = "<<*pb<<endl;

}