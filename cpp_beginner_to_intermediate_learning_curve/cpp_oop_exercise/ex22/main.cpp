/*
Exercise 22: Function Overloading (Static Polymorphism)
Practice Problem: In a class called Printer, create two public methods named print_info(). The first version should take no arguments and print a default message. The second version should take a single std::string argument, interpret it as a message, and print that message prefixed with “Custom: “. This demonstrates Function Overloading.

Expected Output:

Default: No specific message provided.
Custom: Hello OOP!
*/

#include <iostream>
#include <string>
using namespace std;

class Printer{
    public:
        void printInfo(string abc){
            cout<<"Words let out: "<<abc<<"\n";
        }
        void printInfo(int x){
            cout<<"Times I jumped: "<<x<<"\n";
        }
};

int main(){
    Printer p1;
    p1.printInfo("Hello, good morning!");
    p1.printInfo(4);

    return 0;

}