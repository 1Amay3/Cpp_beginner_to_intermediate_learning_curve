#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        string id;
        bool working = false;
    public:
        Employee(string a, string b):name(a),id(b){
            cout<<"Employee instance created with (name:id) -> "<<name<<":"<<id<<"\n";
        }
        ~Employee(){
            cout<<"Employee with (name:id) -> "<<name<<":"<<id<<" not anymore associated with the Dept.\n";
        }
        string show_name(){
            return name; 
        }
        void start_work(){
            cout<<name<<" is now working and performing tasks.\n";
            working = true;
        }
        void stop_work(){
            cout<<name<<" is now not working.\n";
            working = false;
        }
        void check_work(){
            cout<<name<<"'s status: "<<working<<"\n";
        }
};