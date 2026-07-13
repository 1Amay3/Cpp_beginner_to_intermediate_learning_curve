#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
        virtual void eat(){
            cout<<"Animal is  eating.\n";
        }
        void sleep(){
            cout<<"Animal is sleeping.\n";
        }

};

class Dog : public Animal{
    public:
        void eat() override{
            cout<<"Dog is eating kibble.\n";
        }

        void bark(){
            cout<<"Woof! Woof.\n";
        }

};