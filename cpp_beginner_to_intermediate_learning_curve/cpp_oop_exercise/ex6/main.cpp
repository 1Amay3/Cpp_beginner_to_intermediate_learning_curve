/*
Exercise 6: Destructor Demonstration
Practice Problem: Create a simple class, e.g., Resource, with a private member std::string id which models acquiring and releasing a resource. Implement a constructor that prints “Resource [ID] acquired” and a destructor that prints “Resource [ID] released”. Use a local object inside a function to clearly show when the destructor is called.

*/

#include <iostream>
#include <string>
using namespace std;

class Resource{
    private:
    string id;
    public:
    Resource(string str):id(str){
        cout<<"Resource "<<id<<" acquired.\n";
    }
    ~Resource(){
        cout<<"Resource "<<id<<" released.";
    }
};

int main(){
    {
        Resource r1("123");
    }
    return 0;
}