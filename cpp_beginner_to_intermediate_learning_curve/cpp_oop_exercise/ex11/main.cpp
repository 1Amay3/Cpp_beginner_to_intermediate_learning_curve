/*
Exercise 11: Temperature Converter With Getters and Setters
Practice Problem: Implement a class Temperature with a private member double celsius.
Provide a public setter method set_celsius(double c) to assign a value to the 
private member. Also, provide a public getter method get_fahrenheit() that 
calculates and returns the temperature in Fahrenheit using the formula: 
F = C (9/5) + 32.

Given:

class Temperature {
private:
    double celsius;
};
Expected Output:

Celsius set to: 25
Fahrenheit: 77
Celsius set to: 100
Fahrenheit: 212
*/
#include <iostream>
#include "temp.hpp"
using namespace std;

int main(){
    Temperature room1(22);
    room1.set_celcius(25);
    room1.get_farenheit();
    room1.set_celcius(100);
    room1.get_farenheit();
    
    return 0;
}
