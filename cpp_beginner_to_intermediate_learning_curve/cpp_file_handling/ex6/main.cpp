/*
Exercise 6: Copy File
Practice Problem: Write a program that copies the content of a file named source.txt to a new file called destination.txt. 
Both files must be handled correctly, including opening and closing the streams.

Expected Output:

File copied successfully from mydata.txt to destination.txt

destination.txt content:
Hello, File Handling!
This is the appended text.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    ifstream old_f("mydata.txt");
    ofstream new_f("destination.txt");
    if(!old_f || !new_f){
        cerr<<"Unable to open one of the files.\n";
        return 1;
    }
    string line;
    while(getline(old_f,line)){
        new_f<<line;
        new_f<<"\n";
    }
    new_f.close();
    old_f.close();
    ifstream read_f("destination.txt");
    while(getline(read_f,line)){
        cout<<line<<"\n";
    }
    read_f.close();
    return 0;
}