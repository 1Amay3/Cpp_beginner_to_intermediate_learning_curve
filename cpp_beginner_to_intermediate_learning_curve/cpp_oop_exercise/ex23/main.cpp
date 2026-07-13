/*
Exercise 23: Operator Overloading (Binary Addition)
Practice Problem: Overload the binary addition operator (+) for the Point class 
(with private members x and y coordinates). 
The overloaded operator should take two Point objects as operands and return a 
new Point object that represents the component-wise sum: 
(x1, y1) + (x2, y2) = (x1+x2, y1+y2).

Given:

class Point {
private:
    int x;
    int y;
};
Expected Output:

P1: (10, 5)
P2: (3, 7)
P3 (P1 + P2): (13, 12)
*/
#include <iostream>
#include <string>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(int a,int b):x(a),y(b){}
        Point operator+(const Point& p1){
            return Point(x+p1.x,y+p1.y);
        }
        void plot(){
            cout<<"The coordinates are, x: "<<x<<" , y: "<<y<<"\n";
        }

    
};


int main(){
    Point p1(1,4);
    Point p2(3,7);
    Point p3 = p2+p1;
    p3.plot();
    return 0;
}