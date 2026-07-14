/*
Exercise 19: Structure Retrieval (Text)
Practice Problem: Read the structured, comma-separated data from people_text.txt (created in Exercise 18). Parse each line and reconstruct the data into a std::vector<Person>. Finally, display all the retrieved records on the console.

Expected Output:

--- Retrieved People Data ---
Name: Jessa, Age: 28
Name: Jon, Age: 35
Name: Kerry, Age: 30
*/
#include "helper.hpp"
#include <vector>
int main(){
    ifstream read_f("people.txt");
    if(!read_f){
        cerr<<"Unable to open file.\n";
        return 1;
    }
    string word;
    string name;
    bool b_name =false;
    bool b_age = false;
    int age;
    vector<Person> directory;
    while(read_f>>word){
        if(word == "name:"){
            read_f>>name;
            b_name = true;
        }
        if(word == "age:"){
            read_f>>age;
            b_age = true;
        }
        if(b_age && b_name){
            b_age = false;
            b_name = false;
            Person p1={name,age};
            directory.push_back(p1);
        }
    }
    cout<<"---Directory details---\n";
    for(Person p:directory){
        cout<<"Name: "<<p.get_name()<<" Age: "<<p.get_age()<<"\n";
    }
    
    return 0;
}