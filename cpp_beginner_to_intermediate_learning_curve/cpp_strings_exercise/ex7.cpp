/*
Exercise 7: Count Vowels/Consonants
Practice Problem: Write a C++ program that counts the total number of vowels (A, E, I, O, U, 
and their lowercase equivalents) and consonants within that string, ignoring spaces and punctuation.

Given:

std::string str= "PYnative";
Expected Output:

Vowel Count: 3
Consonant Count: 5
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "PYnativ   hhe";
    int vow_c=0;
    int space=0;
    char vowels[5]={'a','e','i','o','u'};
    for(int i = 0;i<str.length();i++){
        if(!isalpha(str[i])){
                space+=1;
                continue;
            }
        for(int j = 0;j<5;j++){
            
            if(tolower(str[i])==vowels[j]){
                vow_c+=1;
                break;
            }
        }
    }
    cout<<"Vowel Count: "<<vow_c<<"\n";
    cout<<"Consonant Count: "<<str.length()-vow_c-space<<endl;
    return 0;
}