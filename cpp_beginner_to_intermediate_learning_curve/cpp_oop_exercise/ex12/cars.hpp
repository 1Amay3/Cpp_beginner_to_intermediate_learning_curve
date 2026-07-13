#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string make;
        string model;
        const int year;
    public:
    

        Car(string ma,string mo,int y):make(ma),model(mo),year(y){

        }
        void start_engine() const{
            cout<<year<<" "<<make<<" "<<model<<" engine has started!\n";
        }

        void car_details() const{
            cout<<year<<" "<<make<<" "<<model<<"\n";
        }

        void set_model(string m){
            cout<<"Changing car details.\n";
            model = m;
        }
        void set_make(string m){
            cout<<"Changing car details.\n";
            make = m;
        }
        int get_year() const{
            return year;
        }
};


#endif