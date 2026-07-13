/*
Exercise 21: Remove Duplicates
Practice Problem: Write a program that takes a string and removes all duplicate characters, ensuring that the order of the remaining unique characters is preserved from the original string.

Given:

std::string input = "programming in c++";
Expected Output:

Original: programming in c++
Unique: progamin c+
*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string strip(string str){
    string out="";
    unordered_map<char,int>check;
    for(char c:str){
        if(!check[c] ){
            out+=c;
            check[c]=1;
    }
}
    return out;

}
int main(){
    string input = "programming in c++";
    cout<<"Original: "<<input<<"\n";
    cout<<"Unique: "<<strip(input);
    return 0;
}