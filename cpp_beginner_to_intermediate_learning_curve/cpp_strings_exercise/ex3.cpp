/*
Exercise 3: Character Access
Practice Problem: Write a C++ program to prints only the first character and the last character 
of a string.

Given:

std::string str = "PYnative";
Expected Output:

First character: P
Last character: e
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string str= "PYnative";

    cout<<"First character: "<<str.front()<<"\n";
    cout<<"Last character: "<<str.back()<<"\n";
    
    return 0;

}