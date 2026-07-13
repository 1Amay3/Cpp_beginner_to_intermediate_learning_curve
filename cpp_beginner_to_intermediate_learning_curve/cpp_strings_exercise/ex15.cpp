/*
Exercise 15: Anagram Check
Practice Problem: Write a function that takes two strings, str1 and str2, and returns true if they are anagrams of each other, and false otherwise. Two strings are anagrams if they contain the same characters with the same frequency (e.g., “listen” and “silent”). Ignore case and whitespace.

Given:

std::string s1 = "Astronomer";
std::string s2 = "Moon starer";
Expected Output:

"Astronomer" and "Moon starer" ARE anagrams.
*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void is_anagram(string str1,string str2){
    unordered_map<char,int>check1;
    unordered_map<char,int>check2;
    /*if(str1.length()!=str2.length()){
        cout<<str1<<" and "<<str2<<" are not anagrams! \n";
    }*/
    for(int i = 0;i<str1.length();i++){
        if(isalpha(str1[i]))
        check1[tolower(str1[i])]+=1;
        
    }
    for(int i = 0;i<str2.length();i++){
        if(isalpha(str2[i]))
        check2[tolower(str2[i])]+=1;
        
    }
    if(check1.size()==check2.size()){ 
        for(auto&[key,value]:check1){
            if(check1[key]!=check2[key]){
                cout<<str1<<" and "<<str2<<" are not anagrams! \n";
                return;
            }
        }
    cout<<str1<<" and "<<str2<<" are anagrams! \n";}
    else{
        cout<<str1<<" and "<<str2<<" are not anagrams! \n";

    }


}

int main(){
    
    string s1 = "Astronomer";
    string s2 = "Moon stpparer";
    is_anagram(s1,s2);
    return 0;

}