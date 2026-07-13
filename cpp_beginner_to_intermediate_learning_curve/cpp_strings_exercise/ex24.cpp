/*
Exercise 24: Longest Common Prefix
Practice Problem: Given an array (or std::vector) of strings, find the longest common prefix string among all of them. If there is no common prefix, return an empty string.

Given:

std::vector<std::string> words = {"flower", "flow", "flight"};
Expected Output:

Strings: flower, flow, flight
Longest Common Prefix: fl
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string pref(vector<string> xyz){
    int len = xyz.size();
    if(len==0){
        return "Empty array detected! \n";
    }
    size_t min_word=xyz.size();
    for (int i=0;i<len;i++){
        min_word =min(min_word,xyz[i].length());
    }
    if(min_word==0){
        return "Array contains empty strings!\n";
    }
    string out = "";
    for(int i = 0;i<min_word;i++){
        char check = xyz[0][i];
        for( string s:xyz){
            if (s[i]!=check){
                return out;
            }
        }
        out+=check;
    }
    return out;
}
int main(){
    vector<std::string> words = {"flower", "flow", "flight"};
    cout<<"String: ";
    for(string s:words){
        if(s==words.back()){
            cout<<s<<"\n";
        }
        else{cout<<s<<", ";}
    }
    cout<<"Longest common prefix: "<<pref(words);
    return 0;
}