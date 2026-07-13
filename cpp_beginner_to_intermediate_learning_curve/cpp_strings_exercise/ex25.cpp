/*
Exercise 25: All Substrings
Practice Problem: Write a program that takes a string input and generates and prints all possible unique substrings of that string.

Given:

std::string s1 = "abc";
Expected Output:

Substrings of "abc":
a ab abc b bc c 
*/
#include <iostream>
#include <string>
using namespace std;
#include <set>

int main(){
    string s1 = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    cout<<"Substrings of \""<<s1<<"\"\n";  
    int len = s1.length();
    set<string> check;
    for(int i = 0;i<len;i++){
        for(int j = i;j<len;j++){
           // out+=s1.substr(i,j-i+1);
            check.insert(s1.substr(i,j-i+1));
        }
        
        
    }
    cout<<check.size();
    for(string s:check){
        cout<<s<<" ";
    }

    return 0; 

}