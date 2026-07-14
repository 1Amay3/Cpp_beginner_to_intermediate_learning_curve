/*
Exercise 15: Filtering Lines
Practice Problem: Read a file named log_data.txt. Write only the lines that start with the letter ‘H’ (case-insensitive) to a new file called filtered_log.txt.

Given:

log_data.txt Content:

Hello, File Handling!
This is the appended text.
hello, cpp File Handling!
Expected Output:

filtered_log.txt Content:

Hello, File Handling!
hello, cpp File Handling!
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream read_f("log_data.txt");
    ofstream write_f("filtered_log.txt");
    if(!read_f || !write_f){
        cerr<<"Unable to open files.\n";
        return 1;

    }
    string line;
    string word;
    while(getline(read_f,line)){
        if(static_cast<char>(toupper(line[0]))=='H'){
            write_f<<line<<"\n";
        }

    }
    read_f.close();
    write_f.close();

    return 0;
}