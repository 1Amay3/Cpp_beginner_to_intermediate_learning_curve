#include "helper.hpp"

int main(){
    Accessor a1;
    Data d1(1234);
    cout<<"Friend Accessor read Data value: "<<a1.display_value(d1);
    return 0;
}