/*
Exercise 20: Runtime Polymorphism
Practice Problem: Using the Abstract Base Class Shape and its derived classes 
(Square, Triangle) from exercise 19, demonstrate Runtime Polymorphism. 
Create a std::vector of Shape* (pointers to Shape). 
Store instances of both Square and Triangle in this vector. 
Iterate through the vector and call the area() method on each pointer.

Expected Output:

--- Calculating Areas (Runtime Polymorphism) ---
Area: 64
Area: 25
Area: 9
*/
#include "shape.hpp"
#include <vector>

int main(){
    vector<Shape*> shapes;
    Shape* s1 = new Square(8);
    Shape* s2 = new Triangle(10,5);
    Shape* s3 = new Square(3);
    shapes.push_back(s1);
    shapes.push_back(s2);
    shapes.push_back(s3);

    cout<<"---Calculating Areas (Runtime Polymorphism)---\n";
    for(auto& s:shapes){
        cout<<"Area: "<<s->area()<<"\n";
    }


    return 0;
}