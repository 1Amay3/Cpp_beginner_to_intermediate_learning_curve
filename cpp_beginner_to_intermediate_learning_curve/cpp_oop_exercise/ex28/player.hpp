#include <iostream>
#include <string>
using namespace std;
class Player{
    private:
        string name;
        int number;
    public:
        Player(string a,int b):name(a),number(b){
            cout<<"Player "<<name<<" created.\n";
        }
        void show_player(){
            cout<<name<<" (#"<<number<<")\n";
        }
        ~Player(){
            cout<<"Player "<<name<<" discarded.\n";
        }
};