#include <iostream>
#include <string>
#include "rectangle.hpp"
using namespace std;




int main(){
    Rectangle one(10,20);
    cout<<"Area of rectangle: "<<one.calculate_area()<<" and, Perimeter of rectangle: "<<one.calculate_perimeter();
    return 0;
}