/*
Exercise 19: Lexicographical Comparison
Practice Problem: Write a program to compare two strings, str1 and str2, 
lexicographically (dictionary order). Output which string comes first or if they are equal, 
without using the built-in comparison operators (<, >, ==) directly on the strings.

Given:

std::string s1 = "apple";
std::string s2 = "apply";
Expected Output:

Comparing "apple" and "apply"
"apple" comes first (Result: -20).
*/
#include <iostream>
#include <string>
using namespace std;

string check(string str1, string str2){
    int min_size=min(str1.length(),str2.length());
    for(int i = 0;i<min_size;i++){
        if(str1[i]<str2[i]){
            return str1;
        }
        else if(str1[i]>str2[i]){
            return str2;
        }
    }
    if(str1.size()==str2.size()){
        return "Same word!";
    };
    if(str1.size()<str2.size()){
        return str1;
    }
    if(str1.size()>str2.size()){
        return str2;
    }
}

int main(){
    string s1 = "apple";
    string s2 = "apply";
    string out=check(s1,s2);
    if(out=="prefix"){
        cout<<"Any order is viable!\n";
        return 0;
    }
    cout<<"Comparing '"<<s1<<"' and '"<<s2<<", "<<out<<" comes first.\n";
    return 0;
}
