#ifndef CIRC_
#define CIRC_

#include <iostream>
#include <string>

using namespace std;

class Circle{
    private:
    double radius;
    public:
    Circle(double r):radius(r){}
    double get_area() const{
        double pi = 3.14159;
        return radius*radius*pi;
    }
};

#endif
