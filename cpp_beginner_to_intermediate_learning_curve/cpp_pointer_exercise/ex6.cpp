/*
Exercise 6: Pointer Arithmetic on char Array
Practice Problem: Declare a char array word[] = "CODE". Declare a char pointer p 
pointing to the beginning of the array. 
Use pointer arithmetic (p + N) and the dereference operator to 
print the third character (‘D’) of the array.

Expected Output:

The third character is: D
*/
#include <iostream>
using namespace std;

int main(){


    char word[]="CODE";
    char* ptr = &word[0];

    cout<<"The third character is : "<<*(ptr+2)<<endl; 

    return 0;
}