/*
xercise 5: String Copy
Practice Problem: Write a C++ program to demonstrate how to copy the contents of one 
std::string variable into another new std::string variable, and then print both variables to 
confirm the copy.

Given:

std::string original_string = "Hello, C++ World!";
Expected Output:

Original String (after modification): The original string has been changed.
Copied String (remains unchanged): Hello, C++ World!
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string a="Hello, C++ World!";
    string b= a;
    a= "The original string has been changed.";
    cout<<" Original string (after modification): "<<a<<"\n";
    cout<<" Copied String (remains unchanged): "<<b;
    return 0;
}