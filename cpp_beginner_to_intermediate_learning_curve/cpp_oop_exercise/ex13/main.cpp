/*
Exercise 13: Read-Only Property With Static Counter
Practice Problem: Create a class SerialGenerator with a private static member next_serial_number initialized to 1000. Implement a public method get_serial() that returns the current value of next_serial_number and then increments it. The counter itself should only be readable via this method.

Expected Output:

Initial next serial: 1000
Serial 1: 1000
Serial 2: 1001
Serial 3: 1002
Final next serial: 1003
*/
#include <iostream>
using namespace std;

class SerialGenerator{
    private:
        static int next_serial_number;
    public:
        SerialGenerator(){
            
            cout<<"Initial next serial: "<<next_serial_number<<"\n";
        }
        int get_serial(){
            
            return next_serial_number++;
        }
};
int SerialGenerator::next_serial_number = 1000;
int main(){
    SerialGenerator s1;
    cout<<"Serial 1: "<<s1.get_serial()<<"\n";
    cout<<"Serial 2: "<<s1.get_serial()<<"\n";
    cout<<"Serial 3: "<<s1.get_serial()<<"\n";

    cout<<"Final next serial: "<<s1.get_serial()<<"\n";
    return 0;


}