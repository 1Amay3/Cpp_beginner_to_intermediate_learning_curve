/*
Exercise 8: Clear File Content
Practice Problem: Write a program that effectively clears all content from an existing file named destination.txt 
without deleting the file itself.

Expected Output:

File 'destination.txt' content has been cleared (truncated).
Verification: File is now empty.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    ofstream open_f("destination.txt");
    if(!open_f){
        cerr<<"Error opening file.\n";
        return 1;
    }
    cout<<"File 'destination.txt' content has been cleared (truncated)\n.";
    open_f.close();
    ifstream read_f("destination.txt");
    if(!read_f){
        cerr<<"Error opening file.\n";
        return 1;
    }
    string line;
    if(getline(read_f,line)){
        cout<<"File is not empty! Something went wrong with clearing the file.\n";
    }else{
        cout<<"File is empty. Verified OK!";
    }
    read_f.close();

    return 0;
}