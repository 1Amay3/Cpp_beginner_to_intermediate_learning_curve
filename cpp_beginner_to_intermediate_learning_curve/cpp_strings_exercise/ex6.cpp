/*
Exercise 6: Reverse String
Practice Problem: Write a C++ program to reverse a string.

Given:

std::string original_string = "PYnative";
Expected Output:

Original string: PYnative
Reversed string: evitanYP
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string original_string = "PYnative";
    string out="";
    int len=original_string.length();
    for(int i=len-1;i>=0;i--){
        out+=original_string[i];

    }
    cout<<"Original string: "<<original_string<<"\n";
    cout<<"Reversed string: "<<out;
    return 0;
}