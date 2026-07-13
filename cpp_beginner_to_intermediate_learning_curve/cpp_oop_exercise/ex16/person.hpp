/*
Exercise 16: Protected Members
Practice Problem: Create a base class Person with a protected member int age. Derive two classes, Student and Teacher, from Person. Demonstrate that both derived classes can directly access and modify the protected age member, but an external function (like main) cannot.


*/
#include <iostream>

using namespace std;

class Person{
    protected:
        int age;
    public:
    Person(int x):age(x){}
        void show(){
            cout<<"Age: "<<age<<"\n";
        }
};

class Student:public Person{
    public:
    Student(int x):Person(x){}

    void set_age(int x){
        age = x;
        cout<<"New age: "<<age<<"\n";
    }
};

class Teacher:public Person{
    public:
    Teacher(int x):Person(x){}
    void set_age(int x){
        age = x;
        cout<<"New age: "<<age<<"\n";
    }
};