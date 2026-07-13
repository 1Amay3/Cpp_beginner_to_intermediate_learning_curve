/*
Exercise 7: Check File Existence
Practice Problem: Ask the user to enter a filename. Write a program to check if the specified file exists and can be opened for reading. Output a clear message indicating whether the file was found or not.

Expected Output:

Enter the filename to check: mydata.txt
SUCCESS: File 'mydata.txt' was found and opened successfully.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    cout<<"Enter the filename to check: \n";
    string f_name;
    getline(cin,f_name);
    ifstream open_f(f_name);
    if(!open_f){
        cerr<<"Unable to find/open the file.\n";
        return 1;
    }
    cout<<"File "<<f_name<<" opened.\n";
    open_f.close();
    return 0;
}