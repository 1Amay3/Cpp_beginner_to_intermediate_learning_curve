/*
Exercise 21: Virtual Destructor
Practice Problem: Create a base class Base and a derived class Derived. The Derived class should manage a simple dynamically allocated resource (e.g., new int). If the Base class does not have a virtual destructor, then the memory leak will occurs when deleting a derived object via a base class pointer. so, add a virtual destructor to Base and show that the leak is fixed.

Expected Output:

2. Derived constructor: Resource allocated.

Deleting Derived object via Base pointer...
3. Derived destructor called: Resource DEALLOCATED.
1. Base destructor called.
*/
#include <iostream>
using namespace std;

class Base{
    public:
        virtual ~Base(){
            cout<<"Base Destructor called.\n";
        }
};
class Derived:public Base{
    private:
        int* num = new int;
    public:
        Derived(){
            cout<<"Derived constructor called, resource allocated\n";
        }
        ~Derived() override {
            cout<<"Derived destrutor called.\nResource deallocated!\n";
        }
};

int main(){
    for (int i = 0; i <1;i++)
    {
        Base* d1 = new Derived;
        delete d1;
    }
    return 0;
}