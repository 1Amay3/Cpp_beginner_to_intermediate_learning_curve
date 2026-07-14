/*
Exercise 9: Word Counter
Practice Problem: Read a file named mydata.txt and count the total number of words it contains. Assume that words are separated by any form of whitespace (spaces, newlines, tabs). Display the final word count.

Expected Output:

Total number of words in mydata.txt: 8
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream read_f("mydata.txt");
    if(!read_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    string word;
    int count = 0;
    while(read_f>>word){
        count++;
    }
    cout<<"Number of words in the file: "<<count<<"\n";
    read_f.close();

    return 0;
}