/*
Exercise 18: Structure I/O (Text)
Practice Problem: Define a C++ structure named Person with private members: std::string name and int age. Implement a program that prompts the user for data for three people and writes their name and age, separated by a comma on the same line, into a text file named people_text.txt.

Expected Output:

Enter data for 3 people:
Person 1 Name: Jessa
Person 1 Age: 28
Person 2 Name: Jon
Person 2 Age: 35
Person 3 Name: Kerry
Person 3 Age: 30

Data successfully written to people_text.txt.
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Person{
    private:
        string name;
        int age;
    public:
    friend void add_dets(int x,string y,Person& p1);
    friend void log_dets(Person& p1,string filename,int count);
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
    write_f<<"name: "<<p1.name;
    write_f<<", age: "<<p1.age<<"\n";
    write_f.close();
    return;
}

int main(){
    int age;
    string name;
   


    for(int i = 1;i<4;i++){    
        Person buffer{};
        cout<<"Please enter name of person "<<i<<"\n";
        cin>>name;
        cout<<"Please enter age of person "<<i<<"\n";
        cin>>age;
        add_dets(age,name,buffer);
        log_dets(buffer,"people.txt",i);
    }
    
    ifstream read_f("people.txt");
    if(!read_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    while(getline(read_f,name)){
        cout<<name<<"\n";
    }
    read_f.close();
    return 0;
}