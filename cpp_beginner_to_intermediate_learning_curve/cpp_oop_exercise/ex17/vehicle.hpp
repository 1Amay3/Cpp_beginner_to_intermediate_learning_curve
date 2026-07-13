/*
Exercise 15: Multilevel Inheritance
Practice Problem: Implement multilevel inheritance using three classes: Vehicle –> Car –> SportsCar.

Exercise 17: Constructor Chaining
Practice Problem: Using the Vehicle –> Car –> SportsCar hierarchy from Exercise 15, rewrite all constructors to explicitly demonstrate constructor chaining using initialization lists, ensuring that when SportsCar is created, its constructor correctly calls the Car constructor, which in turn calls the Vehicle constructor.

Expected Output:

Creating Ferrari...
--> Vehicle constructor called with year 2024
----> Car constructor called with 2 doors
------> SportsCar constructor called with speed 220
Ferrari created, year: 2024
*/
#include <iostream>
#include <string>

using namespace std;
class Vehicle{
    protected:
        int year;
    public:
        Vehicle(int y):year(y){
            cout<<"--Vehicle constructor called with year: "<<year<<"\n";
        }
        void start_transport(){
            cout<<"Vehicle("<<year<<") is moving.\n";
        }
        
};




class Car:public Vehicle{
    private:
        int number_of_doors = 2;
    public:
        Car(int y,int num):Vehicle(y),number_of_doors(num){
            cout<<"----Car constructor called with "<<number_of_doors<<" doors.\n";
        }
        void open_door(){
            cout<<"Car with "<<number_of_doors<<" doors opened.\n";
        }
};

class SportsCar : public Car{
    private:
        int max_speed = 210;
    public:
        SportsCar(int y,int num,int speed):Car(y,num),max_speed(speed){
            cout<<"------SportsCar constructor called with speed "<<speed<<" kmph.\n";
        }
        void activate_turbo(){
            cout<<"Sports car turboo activated! Max speed: "<<max_speed<<"\n";
        }
        int year_made(){
            return year;
        }
};