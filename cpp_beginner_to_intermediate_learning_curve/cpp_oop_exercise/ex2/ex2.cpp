/*
Exercise 2: Car Class With Attributes and Simple Behavior
Practice Problem: Create a Car class with public attributes 
std::string make, std::string model, and int year. Implement a public method start_engine() 
that simply prints the message: “[Year] [Make] [Model] engine started!”.

Expected Output:

2020 Toyota Corolla engine started!*/
#include "cars.hpp"

int main(){
    Car car1("Toyota","Corolla",2020);
    car1.start_engine();
}