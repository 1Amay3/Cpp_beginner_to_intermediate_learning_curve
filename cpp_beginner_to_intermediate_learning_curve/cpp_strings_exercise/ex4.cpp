/*
Exercise 4: Character Check
Practice Problem: Write a C++ program to determine if the given character exists anywhere 
within the string and output a message indicating whether it was found or not.

Given:

std::string text = "PYnative";
char target_char = 't';
Expected Output:

SUCCESS: The character 't' was found at index 4.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string text = "PYnative";
    char target_char = 't';
    size_t check = text.find(target_char);
    if( check!= string::npos){
        cout<<"SUCCESS: The character '"<<target_char<<"' found at index "<<check<<endl;
        }else{
        cout<<" Failed: Character '"<<target_char<<"' not found!\n";
    
    }

    return 0;
}