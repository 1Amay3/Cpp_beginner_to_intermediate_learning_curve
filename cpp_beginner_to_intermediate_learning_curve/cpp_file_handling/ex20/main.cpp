/*
Exercise 20: Binary Write (Integers)
Practice Problem: Create an array of 5 integers. Write these 5 integers into a file named integers.bin in binary format. 
This means writing the raw memory representation of the integers, not their text form.

Expected Output:

Successfully wrote 5 integers in binary format to integers.bin
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    int arr[]={20,22,24,26,28};
    ofstream write_f("integers.bin",ios::binary);
    if(!write_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    //for(int i = 0; i < (sizeof(arr)/sizeof(arr[0]));i++){
    write_f.write(reinterpret_cast<char*>(arr),sizeof(arr));
    //}
    write_f.close();

    //reading:
    /*
    Exercise 21: Binary Read (Integers)
    Practice Problem: Read the 5 integers back from the binary file integers.bin (created in Exercise 23). Store them in a new integer array or vector and display them on the console to verify the data integrity.

    Expected Output:

    Successfully read 5 integers from integers.bin:
    Data[0]: 10
    Data[1]: 255
    Data[2]: 3000
    Data[3]: 42
    Data[4]: 99999

*/
    ifstream read_f("integers.bin",ios::binary);
    if(!read_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    int new_arr[5]; 
    read_f.read(reinterpret_cast<char*>(&new_arr),sizeof(new_arr));
    for(int i:new_arr){
        cout<<i<<"\n";
    }


    return 0;
}