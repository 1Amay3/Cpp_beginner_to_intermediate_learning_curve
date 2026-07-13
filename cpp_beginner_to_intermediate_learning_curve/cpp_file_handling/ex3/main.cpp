/*
Exercise 3: Append to File
Practice Problem: Write a program to open the existing file mydata.txt and append the line This is the appended text.
to the end of the file. The original content should remain intact.

Expected Output:

Successfully appended text to mydata.txt

mydata.txt content:
Hello, File Handling!
This is the appended text.
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ofstream open_f("mydata.txt",ios::app);
    if(!open_f){
        cerr<<"Can't open file.\n";
        return 1;
    }
    open_f<<"This is the appended text.\n";
    open_f.close();
    ifstream read_f("mydata.txt");
    if(!read_f){
        cerr<<"Can't open file.\n";
        return 1;
    }
    string line;
    while(getline(read_f,line)){
        cout<<line<<"\n";
    }
    read_f.close();



    return 0;
}