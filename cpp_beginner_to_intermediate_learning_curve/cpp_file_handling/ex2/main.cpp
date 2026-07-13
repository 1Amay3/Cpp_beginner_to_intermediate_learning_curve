#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream read_f("mydata.txt");
    if(!read_f){
        cerr<<"Error creating/opening file.\n";
        return 1;
    }
    string line;
    
    cout<<"---Content of mydata.txt---\n";
    while(getline(read_f,line))
    cout<<line<<"\n";
    read_f.close();
    return 0;
}