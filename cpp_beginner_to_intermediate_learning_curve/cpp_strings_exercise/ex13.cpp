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

int find_word(string main,string sub){
    for (int i = 0;i<main.length();i++){
            bool check = true;
            for (int j = 0;j<sub.length();j++){
                if(sub[j]!=main[j+i]){
                    check=false;
                    break;
                }
            }
            if(check){
                return i;
            }
            
        }
        return -1;
    }

int main(){
    string text = "The quick brown fox jumps over the quick dog.";
    string old_word = "quick";
    string new_word = "slow";
    int new_l=new_word.length();
    int old_l=old_word.length();
    int start=find_word(text,old_word);
    string out="";
    for(int i =0;i<start;i++){
        out+=text[i];
    }
    out+=new_word;
    for(int i =start+old_l;i<text.length();i++){
        out+=text[i];
    }
    cout<<"Original: "<<text<<'\n';
    cout<<"Modified: "<<out;
    
    return 0;

}