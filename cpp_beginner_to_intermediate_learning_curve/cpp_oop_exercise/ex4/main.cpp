#include <iostream>
#include <string>
#include "circle.hpp"
using namespace std;
int main(){
    double rad = 5;
    Circle c1(5);
    cout<<"Circle with radius "<<rad<<" has an area of: "<<c1.get_area();
    return 0;
}