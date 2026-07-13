/*
Exercise 22: String Rotation Check
Practice Problem: Write a function that takes two strings, str1 and str2, and 
checks if str2 is a rotation of str1. A rotation means the characters remain in the same order but the starting point is shifted (e.g., “ABCDE” is a rotation of “CDEAB”).

Given:

std::string s1 = "waterbottle";
std::string s2 = "erbottlewat"; // Rotation
Expected Output:

"erbottlewat" IS a rotation of "waterbottle".
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "waterbottle";
    string s2 = "erbottlewat";
    if(s1.length()!=s2.length()){
        cout<<s1<<" and "<<s2<<" are not rotations of each other\n";
        return 0;
    }
    string check = s1+s1;
    if(check.find(s2)!=string::npos){
        cout<<"'"<<s2<<"' IS a rotation of '"<<s1<<"'\n";
        return 0;
    }
    cout<<s1<<" and "<<s2<<" are not rotations of each other\n";


    return 0;
}