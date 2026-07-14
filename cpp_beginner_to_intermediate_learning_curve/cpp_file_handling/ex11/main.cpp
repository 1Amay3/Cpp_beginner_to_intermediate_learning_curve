/*
Exercise 11: Simple Search
Practice Problem: Ask the user for a word (a search key). Read a file named mydata.txt and determine if the search key exists anywhere within the file. Report the result (found or not found) to the user.

Expected Output:

Enter the word to search for: Hello
SUCCESS: The word 'Hello' was found in the document.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    ifstream read_f("mydata.txt");
    if(!read_f){
        cerr<<"Trouble loading file.\n";
        return 1;
    }
    string check;
    cout<<"Enter the word to search for: \n";
    getline(cin,check);
    string line;
    while(getline(read_f,line)){
        if(line.find(check)!=string::npos){
            cout<<"Success. The word "<<check<<" was found in the document.\n";
            read_f.close();
            return 0;
        }
    }
    cout<<"Failed. The word "<<check<<" was not found in the document.\n";
    read_f.close();
    return 0;
}