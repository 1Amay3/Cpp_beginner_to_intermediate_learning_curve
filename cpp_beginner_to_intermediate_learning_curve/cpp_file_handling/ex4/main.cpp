/*
Exercise 4: Count Characters
Practice Problem: Read the content of the file mydata.txt and count the total number of characters it contains. Display the final count on the console. Newline characters should also be counted.

Expected Output:

Total number of characters in mydata.txt: 49
*/
#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

int main(){
    ifstream read_f("mydata.txt");
    if(!read_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    char x;
    int count = 0;
    while(read_f.get(x)){
        count++;
    }
    cout<<count;
    return 0;
}