/*
Exercise 12: Find Substring
Practice Problem: Given a main string (the text) and a substring (the pattern). 
Write a C++ program that find and print the starting index of the first occurrence of the 
substring within the main string. If the substring is not found, print a descriptive message.

Given:

std::string str = "PYnative c++ Exercises";
Expected Output:

main text string: PYnative c++ Exercises
substring to search for: c++
Substring found!
Starting index: 9
*/
#include <iostream>
#include <string>

using namespace std;
int main(){
    string str = "PYnative c++ Exercises";
    string find="c++";
    cout<<"Main text string: "<<str<<"\n";
    cout<<"Substring to search for: "<<find<<"\n";
    for (int i = 0;i<str.length();i++){
        bool check = true;
        for (int j = 0;j<find.length();j++){
            if(find[j]!=str[j+i]){
                check=false;
                break;
            }
        }
        if(check){
            cout<<"Substring found!\n"<<"Starting index: "<<i;
        }
    }
    return 0;
}