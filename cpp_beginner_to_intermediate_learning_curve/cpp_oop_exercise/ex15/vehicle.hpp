/*
Exercise 15: Multilevel Inheritance
Practice Problem: Implement multilevel inheritance using three classes: Vehicle –> Car –> SportsCar.

Vehicle should have a method start_transport().
Car should inherit from Vehicle and add a private attribute int number_of_doors and a method open_door().
SportsCar should inherit from Car and add a private attribute int max_speed and a method activate_turbo().
Expected Output:

Vehicle (2023) is moving.
Car with 2 doors opened.
Sports Car turbo activated! Max speed: 210 mph.
*/
#include <iostream>
#include <string>

using namespace std;
class Vehicle{
    private:
        int year = 2003;
    public:
        void start_transport(){
            cout<<"Vehicle("<<year<<") is moving.\n";
        }
        
};




class Car:public Vehicle{
    private:
        int number_of_doors = 2;
    public:
        void open_door(){
            cout<<"Car with "<<number_of_doors<<" doors opened.\n";
        }
};

class SportsCar : public Car{
    private:
        int max_speed = 210;
    public:
        void activate_turbo(){
            cout<<"Sports car turboo activated! Max speed: "<<max_speed<<"\n";
        }
};