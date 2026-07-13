/*
Exercise 2: String Concatenation
Practice Problem: Write a C++ program that takes two separate strings as input from the user 
and then combines (concatenates) them into a single new string, printing the result.

Expected Output:

Enter the first string: C++ 
Enter the second string:  Programming                           
The combined string is: C++  Programming
*/

#include <iostream>
#include <string>

using namespace std;
int main(){

    string a;
    string b;
    cout<<"Enter the first string:  \n";
    getline(cin,a);
    cout<<"ENter the second string: \n";
    getline(cin,b);
    string c=a+b;
    cout<< "The combined string is: "<<c;

    return 0;
}