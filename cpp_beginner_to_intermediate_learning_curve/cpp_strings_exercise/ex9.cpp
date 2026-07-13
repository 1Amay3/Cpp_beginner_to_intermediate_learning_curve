/*
Exercise 9: Remove Spaces
Practice Problem: Write a C++ program that accepts a string from the user and creates a 
new string that is identical to the original but with all whitespace characters removed.

Given:

std::string str = "This String Has Multiple Spaces.";
Expected Output:

Original string: "This String Has Multiple Spaces."
String without spaces: "ThisStringHasMultipleSpaces."

*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout<<"Enter string: \n";
    getline(cin,str);
    string cp="";
    for( char c : str){
        if(!isspace(c))
        cp+=c;
    }
    cout<<"Original string: "<<str<<"\n";
    cout<<"String without spaces: "<<cp<<endl;
    return 0;
}