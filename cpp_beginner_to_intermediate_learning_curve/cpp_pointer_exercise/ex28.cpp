/*
Exercise 28: Memory Leak Demonstration
Practice Problem: Write a function named leak_memory that contains a simple for loop that runs 
100 times. Inside the loop, use new int to dynamically allocate memory for an integer, 
but do not use delete. In main, call this function and explain why this pattern leads to a 
memory leak. (Note: Running this in a real scenario will increase memory usage, but 
for the exercise, just understand the mechanism).
*/
#include <iostream>
using namespace std;

void leak_memory(){
    for(int i = 0;i<100;i++){
        int* num=new int(i);
    }
}

int main(){
    leak_memory();

    return 0;
}