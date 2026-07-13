#include <iostream>
#include <string>
using namespace std;

class Box{
    private: 
        int length;
        int width;
    public:
        Box(int a,int b):length(a),width(b){}
        friend int calculate_volume(const Box& b,int h);
        int dim_l(){
            return length;
        }
        int dim_w(){
            return width;
        }

};
int calculate_volume(const Box& b,int h){
        return b.length*b.width*h;
    }