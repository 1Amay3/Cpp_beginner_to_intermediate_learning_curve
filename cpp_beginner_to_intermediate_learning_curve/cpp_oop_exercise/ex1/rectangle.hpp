#ifndef RECT_H
#define RECT_H
#include <iostream>
#include <string>

class Rectangle{
private:
    int length;
    int width;
public:
    Rectangle(int l,int w):length(l),width(w){
        
    }

    int calculate_area(){
        return length*width;
    }

    int calculate_perimeter(){
        return 2*(length+width);
    }

};



#endif