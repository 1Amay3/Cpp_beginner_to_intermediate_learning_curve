/*
Exercise 16: Check for Digit/Letter Only
Practice Problem: Write a program that checks an input string to determine if it contains 
only alphabetic characters (letters) or only numeric characters (digits). 
If it contains any other character (like spaces or punctuation), or a mix of letters and digits, 
it should report that.

Given:

std::string s1 = "HelloWorld";
std::string s2 = "12345";
std::string s3 = "H3llo";
Expected Output:

HelloWorld Contains only letters.
12345 Contains only digits.
H3llo Contains a mix of characters and/or symbols.
*/
#include <string>
#include <iostream>
using namespace std;

void combo(string s){
    bool alpha = false;
    bool numeric = false;
    for(char c:s){
        
        if(isspace(c)){
            cout<<s<<" is a mix of characters\n";
            return;
        }
        if(isalpha(c)){
            alpha = true;
        }
        if(isdigit(c)){
            numeric = true;
        }
    }
    if(alpha && numeric){
        cout<<s<<" is a mix of characters.\n";
        return;
    }
    if(alpha && !numeric){
        cout<<s<< " contains only letters.\n";
        return;
    }
   // if(!alpha && numeric){
        cout<<s<< " contains only digits.\n";
    //}
}

int main(){
    string s1 = "HelloWorld";
    string s2 = "12345";
    string s3 = "H3llo";
    combo(s1);
    combo(s2);
    combo(s3);
    return 0;
}