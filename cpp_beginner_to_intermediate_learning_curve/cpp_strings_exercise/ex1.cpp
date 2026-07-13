/*
Exercise 1: String Length
Practice Problem: Write a C++ program that prompts the user to enter a string and then calculates 
and prints the total number of characters in that string (its length).

Expected Output:

Enter a string: PYnative.com
The length of the string is: 12
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout<<"Enter something: "<<endl;
    getline(cin,str);
    cout<< "The length of the string is: "<<str.length()<<endl;

    return 0;
}