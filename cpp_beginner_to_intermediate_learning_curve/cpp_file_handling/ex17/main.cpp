/*
Exercise 17: Reverse File Content (Line by Line)
Practice Problem: Read all lines of a file named mydata.txt into an in-memory structure. Reverse the order of these lines and 
write them to a new file called reversed.txt. The last line of the original file should be the first line of the new file, 
and so on.

This exercise demonstrates intermediate data storage before output.

Expected Output:

Lines reversed and saved to reversed.txt

reversed.txt Content
hello, cpp File Handling!
This is the appended text.
Hello, File Handling!*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    ifstream w_f("mydata.txt");
    if(!w_f){
        cerr<<"Unable to open file. \n";
        return 1;
    }
    string line;
    vector<string>page;
    while(getline(w_f,line)){
        page.push_back(line);
    }
    int count = page.size();
    ofstream r_f("reveresed.txt");
    if(!r_f){
        cerr<<"Unable to open file. \n";
        return 1;
    }

    for(int i = count-1;i>=0;i--){
        r_f<<page[i]<<"\n";
    }
    w_f.close();
    r_f.close();
    return 0;
}