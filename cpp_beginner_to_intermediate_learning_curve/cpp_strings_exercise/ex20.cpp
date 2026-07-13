/*
Exercise 20: Title Case
Practice Problem: Write a program to convert an input string into Title Case. This means the first letter of every word must be converted to uppercase, and all other letters in the words must be converted to lowercase..

Given:

std::string input = "thIS is a sampLe sEntence to convErt.";
Expected Output:

Original: thIS is a sampLe sEntence to convErt.
Title Case: Thi Is A Sample Sentence To Convert.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string input = "thIS is a sampLe sEntence to convErt.";
    cout<<"Original: "<<input<<"\n";
    for(int i = 0;i<input.length();i++){
        input[i]=tolower(input[i]);
    }
    if(isalpha(input[0])){
        input[0]=toupper(input[0]);
    }
    for(int i = 1;i<input.length();i++){
        if(isspace(input[i-1])){
            input[i]=toupper(input[i]);
        }
    }

    cout<<"Title Case: "<<input<<"\n";
    return 0;
}