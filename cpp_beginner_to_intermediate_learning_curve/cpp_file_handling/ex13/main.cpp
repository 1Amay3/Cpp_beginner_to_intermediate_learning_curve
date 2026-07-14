/*
Exercise 13: Data Storage (Integers)
Practice Problem: Ask the user to enter five integer values. Write these five numbers, each on a separate line, into a file named numbers.txt.

Expected Output:

Enter five integers (press Enter after each):
Integer 1: 10
Integer 2: 20
Integer 3: 30
Integer 4: 40
Integer 5: 50
Five integers successfully written to numbers.txt.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream w_f("numbers.txt");
    if(!w_f){
        cerr<<"Unable to open file. \n";
        return 1;
    }
    int in;
    cout<<"Please enter five integers:  (press enter after each)\n";
    for(int i = 0 ; i<5 ; i++){
        string stage;
        getline(cin,stage);
        w_f<<"Integer "<<(i+1)<<": "<<stoi(stage)<<"\n";
    }
    cout<<"Five integers successfully entered into file.\n";
    w_f.close();
    return 0;
}