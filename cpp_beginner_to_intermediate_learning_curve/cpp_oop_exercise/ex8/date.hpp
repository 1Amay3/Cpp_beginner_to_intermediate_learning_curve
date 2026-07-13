#include <iostream>
#include <string>

using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:

        Date(int a,int b,int c):day(a),month(b),year(c){
            cout<<"Entered Date: "<<day<<"-"<<month<<"-"<<year<<"\n";
            if(month<1 || month>12){
                cout<<"Warning: Invalid month("<<month<<") entered. Setting to 1\n";
                month = 1;
            }
            cout<<"Valid Date: "<<day<<"-"<<month<<"-"<<year<<"\n";
        }
        ~Date(){
        }
};

