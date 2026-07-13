/*
Exercise 19: Abstract Base Class (Interface)
Practice Problem: Modify the Shape class (from Exercise 18) to make it an Abstract Base Class (ABC). Achieve this by declaring the area() method as a pure virtual function (= 0). Demonstrate that you cannot create an instance of the Shape class, but you must implement area() in the derived classes (Square and Triangle).

Expected Output:

Square Area (5x5): 25
Triangle Area (4x6): 12
*/
#include "shape.hpp"

int main(){
    Shape gen;
    Square five(5);
    Triangle t1(4,6);
    cout<<"Square Area (5x5): "<<five.area()<<endl;
    cout<<"Triangle Area (4x6): "<<t1.area()<<endl;
    cout<<"Generic Shape Area: "<<gen.area()<<endl;
    
    


    return 0;
}