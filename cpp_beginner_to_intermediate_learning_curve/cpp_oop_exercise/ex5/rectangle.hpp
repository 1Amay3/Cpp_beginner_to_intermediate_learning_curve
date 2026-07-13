#include <iostream>
#include <string>

using namespace std;

class Rectangle{
    private:
        int length;
        int width;
    public:
        Rectangle(int l = 1,int w = 1):length(l),width(w){}
        int get_area() const{
            return length*width;
        }

    
};
