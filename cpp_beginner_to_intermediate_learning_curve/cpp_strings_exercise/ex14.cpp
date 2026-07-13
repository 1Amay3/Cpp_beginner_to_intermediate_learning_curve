/*
Exercise 14: Frequency of Characters
Practice Problem: Write a program that counts the frequency (number of occurrences) of 
every unique character in an input string and prints the result only for characters that 
appeared one or more times. Ignore case and non-alphabetic characters.

Given:

std::string str = "Programming in CPP";
Expected Output:

string: Programming in CPP
Character Frequencies:
'a': 1
'c': 1
'g': 2
'i': 2
'm': 2
'n': 2
'o': 1
'p': 3
'r': 2
*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<char,int>check;
    string str = "Programming in CPP";
    for(int i = 0;i<str.length();i++){
        if(isalpha(str[i]))
        {check[tolower(str[i])]+=1;}
    }
    for(auto& [key,value] : check){
        
        cout<<key<<":'"<<value<<"'\n";
    }
    

    return 0;
}
