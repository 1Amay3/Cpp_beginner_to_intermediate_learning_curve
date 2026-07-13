/*
Exercise 8: Case Conversion
Practice Problem: Write a C++ program that convert the entire string to all uppercase characters, print the result, and then convert the string to all lowercase characters and print that result.

Given:

std::string str = "PYnative C++ String Exercises";
Expected Output:

Original: PYnative C++ String Exercises
Uppercase: PYNATIVE C++ STRING EXERCISES
Lowercase: pynative c++ string exercises
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "PYnative C++ String Exercises";
    cout<<"Original: "<<str<<"\n";
    string up="";
    string low="";
    for (int i = 0;i<str.length();i++){
        up+=toupper(str[i]);
        low+=tolower(str[i]);
    }

    cout<<"Uppercase: "<<up<<"\n";
    cout<<"Lowercase: "<<low<<"\n"; 
    return 0;
}