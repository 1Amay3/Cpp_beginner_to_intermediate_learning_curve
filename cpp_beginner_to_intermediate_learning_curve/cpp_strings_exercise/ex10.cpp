/*
Exercise 10: Palindrome Check (Simple)
Practice Problem: Write a C++ program that determines if a given string is a palindrome. 
A palindrome is a sequence of characters that reads the same forwards and backward 
(e.g., “madam” or “racecar”).

Given:

std::string str = "madam";
Expected Output:

"madam" IS a palindrome.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="madaim";
    string rev="";
    for(int i = str.length()-1;i>=0;i--){
        if(str[i]==str[str.length()-i-1]){
            continue;
        };
        cout<<"Not a palindrome"<<endl;
        return 0;

    }
    cout<<"'"<<str<<"' is a palindrome.";


    
return 0;
}