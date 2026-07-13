#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        virtual double area(){
            return 0.0;
        }
};

class Square:public Shape{
    private:
        double side;
    public:
        Square(double a):side(a){}
        double area() override{
            return side*side;
        }
};

class Triangle:public Shape{
    private:
        double base;
        double height;
    public:
        Triangle(double b,double h):base(b),height(h){}
        double area() override{
            return base*height*0.5;
        }
};