/*
Exercise 1: Create and Write
Practice Problem:Write a program to create a new text file named mydata.txt. 
Open the file for output and write the single line of text Hello, File Handling! into it. 
Ensure the program handles the closing of the file stream properly.

Expected Output:

Successfully wrote data to mydata.txt

mydata.txt File content:
Hello, File Handling!
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream new_file("mydata.txt");
    if(!new_file){
        cerr<<"Error creating/opening the file!\n";
        return 1;
    }
    new_file<<"Hello, File Handling!\n";
    string line;
    new_file.close();
    ifstream read_file("mydata.txt");
    if(!read_file){
        cerr<<"Error opening the file!\n";
        return 1;
    }
    while(getline(read_file,line)){
        cout<<line;
    }
    read_file.close();
    return 0;
}