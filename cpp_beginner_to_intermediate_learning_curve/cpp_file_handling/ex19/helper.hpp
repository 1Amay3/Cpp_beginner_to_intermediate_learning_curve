#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Person{
    private:
        string name;
        int age;
    public:
    Person(string a,int b):name(a),age(b){}
    friend void add_dets(int x,string y,Person& p1);
    friend void log_dets(Person& p1,string filename,int count);
    int get_age(){
        return age;
    }
    string get_name(){
        return name;
    }
};  

void add_dets(int x,string y,Person& p1){
    p1.age = x;
    p1.name = y;
}
void log_dets(Person& p1,string filename,int count){
    ofstream write_f(filename,ios::app);
    if(!write_f){
        cerr<<"Error opening file. Unable to log info.\n";
        return;
    }
    write_f<<"Person "<<count<<" name: "<<p1.name<<"\n";
    write_f<<"Person "<<count<<" age: "<<p1.age<<"\n";
    write_f.close();
    return;
}
