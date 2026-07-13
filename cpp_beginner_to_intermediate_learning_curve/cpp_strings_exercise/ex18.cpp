/*
Exercise 18: Sort Characters
Practice Problem: Write a program that takes a single string as input and sorts all the characters within that string alphabetically (A-Z or a-z) in ascending order. Punctuation and spaces should also be sorted along with the letters.

Given:

std::string str = "PYnative";
Expected Output:

Original string: PYnative
Sorted characters: PYaeintv
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a="PYnative";
    sort(a.begin(),a.end());
    cout<<a;
    return 0;
}