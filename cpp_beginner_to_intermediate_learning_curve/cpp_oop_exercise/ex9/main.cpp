/*
Exercise 9: Initialization List
Practice Problem: Create a C++ class named Student with the following private members: 
const std::string name, int roll_number, and double score. 
Implement a constructor that takes parameters for these three members and 
initializes them exclusively using the constructor initialization list. 
Include a display_data() method to show the initialized values.

Given:

class Student {
private:
    const std::string name; // Note: making 'name' const requires initialization list
    int roll_number;
    double score;
};
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    const string name; // Note: making 'name' const requires initialization list
    int roll_number;
    double score;
public:
    Student( string a,int b,double c):name(a),roll_number(b),score(c){}
    void display_data(){
        cout<<"Student: "<<name<<" | "<<"Roll: "<<roll_number<<" | "<<"Score: "<<score<<"\n";
    }
};

int main(){
    Student clara("Clara B.",101,78.9);
    clara.display_data();
    return 0;
}