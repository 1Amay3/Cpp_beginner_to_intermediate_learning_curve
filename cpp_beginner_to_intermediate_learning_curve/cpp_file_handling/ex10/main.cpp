/*
Exercise 10: Line Numbering
Practice Problem: Read the content of mydata.txt line by line and write the content to a new file, numbered_output.txt. Each line in the output file must be prepended with its 1-based line number, followed by a colon and a space (e.g., “1: First line of text”).

Expected Output:

Successfully numbered lines into numbered_output.txt

numbered_output.txt content:
1: Hello, File Handling!
2: This is the appended text.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ifstream old_f("mydata.txt");
    ofstream new_f("numbered_output.txt");
    if(!old_f || !new_f){
        cerr<<"Something went wrong with opening the files.\n";
        return 1;
    }
    string line;
    int l_count = 0;
    while(getline(old_f,line)){
        new_f<<++l_count<<": "<<line<<"\n";
    }
    old_f.close();
    new_f.close();
    return 0;
}