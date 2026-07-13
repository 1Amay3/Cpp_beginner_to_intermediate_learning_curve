#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string make;
    string model;
    int year;

    Car(string ma,string mo,int y):make(ma),model(mo),year(y){

    }
    void start_engine(){
        cout<<year<<" "<<make<<" "<<model<<" enigne has started!";
    }
};

#endif