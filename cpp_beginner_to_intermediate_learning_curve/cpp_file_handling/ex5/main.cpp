/*
Exercise 5: Count Lines
Practice Problem: Read the content of the file mydata.txt and count the total number of lines present in the file. 
Display the final count on the console. An empty file should have a line count of 0.

Expected Output:

Total number of lines in mydata.txt: 2

*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream open_f("mydata.txt");
    if(!open_f){
        cerr<<"Unable to open the file.\n";
        return 1;
    }
    string line;
    int count = 0;
    while(getline(open_f,line)){
        count++;
    }
    cout<<"Number of lines in \"mydata.txt\": "<<count<<endl;
    open_f.close();
    return 0;
}
