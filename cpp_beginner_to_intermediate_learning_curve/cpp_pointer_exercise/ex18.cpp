/*
Exercise 18: Modifying String in Function
Practice Problem: Write a function named to_uppercase that takes a character 
pointer(char*) representing a C-style string. 
The function must iterate through the string using pointer arithmetic and 
modify the characters in place to convert all lowercase letters to uppercase. 
Use the standard library function toupper() from <cctype>.

Given:

char text[] = "hello pointers exercise";
Expected Output:

Original: hello pointers exercise
Uppercase: HELLO POINTERS EXERCISE
*/

#include <iostream>
using namespace std;

void to_uppercase(char ptr[]){
    while(*ptr!='\0'){
        *ptr=toupper(*ptr);
        ptr++;
    }
}
int main(){

    char text[] = "hello pointers exercise";
    cout<<text<<endl;  
    char* ptr=text;  
    to_uppercase(ptr);
    cout<<text;
    return 0;
}