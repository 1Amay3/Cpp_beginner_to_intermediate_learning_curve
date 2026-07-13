#include <iostream>
#include <string>

using namespace std;


class Point{
    private:
        int x;
        int y;
    public:
        Point(int a, int b):x(a),y(b){}
        Point(const Point& name):x(name.x),y(name.y)
        {
            cout<<"Copy constructor called.\n";
        }
        void display(){
            cout<<"Point("<<x<<","<<y<<")\n";
}
};      

int main(){
    Point p1(10,20);
    p1.display();
    Point p2(p1);
    p2.display();
    Point p3 = p1;
    p3.display();


    return 0;
}