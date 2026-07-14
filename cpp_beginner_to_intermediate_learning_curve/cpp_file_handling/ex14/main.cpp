/*
Exercise 14: Data Retrieval (Average)
Practice Problem: Read the integers stored in numbers.txt (created in Exercise 13). 
Calculate the sum and the average of all the numbers in the file. Display both the sum and the average.

Expected Output:

Total numbers read: 5
Sum of numbers: 150
Average of numbers: 30.00
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream r_f("numbers.txt");
    if(!r_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    string line;
    int total = 0;
    int count = 0;
    while(getline(r_f,line)){
        total+=stoi(line);
        count++;
    }
    double mean =total/count;
    cout<<"Sum of numbers: "<<total<<endl;
    cout<<"Mean of numbers: "<<mean<<endl;
    r_f.close();
    return 0;
}