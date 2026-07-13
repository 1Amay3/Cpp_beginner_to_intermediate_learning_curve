/*
Exercise 13: Replace Substring
Practice Problem: Write a C++ program that takes a text string, an old word (substring) to be 
replaced, and a new word (replacement string). The program must find the first occurrence of 
the old word and replace it with the new word, then print the modified string.

Given:

std::string text = "The quick brown fox jumps over the quick dog.";
std::string old_word = "quick";
std::string new_word = "slow";
Expected Output:

Original: The quick brown fox jumps over the quick dog.
Modified: The slow brown fox jumps over the slow dog.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string text = "The quick brown fox jumps over the quick dog.";
    string old_word = "quick";
    string new_word = "slow"; 
    cout<<"Original: "<<text<<'\n';


    size_t  check = text.find(old_word);
    if(check!=string::npos){
        text.replace(check,old_word.length(),new_word);
    }

    cout<<"Modified: "<<text;
    
    return 0;

}