/*
Exercise 12: Case Conversion
Practice Problem: Read the content of a file named mydata.txt and write all its content to a new output file, uppercase.txt, converting every letter to uppercase. Non-alphabetic characters should remain unchanged.

Expected Output:

Content successfully converted to uppercase and saved to uppercase.txt

uppercase.txt Content:
HELLO, FILE HANDLING!
THIS IS THE APPENDED TEXT.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
    ifstream read_f("mydata.txt");
    ofstream write_f("uppercase.txt");
    if(!read_f || !write_f){
        cerr<<"Unable to open files.\n";
        return 1;
    }
    char c;
    while(read_f.get(c)){
        unsigned char uc = static_cast<unsigned char>(c);
        char upper = static_cast<char>(toupper(uc));
        write_f << upper;
        cout << upper;
    }
    read_f.close();
    write_f.close();
    
    return 0;
}