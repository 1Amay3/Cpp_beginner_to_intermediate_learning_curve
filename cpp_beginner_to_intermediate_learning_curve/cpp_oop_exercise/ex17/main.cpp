#include "vehicle.hpp"

int main(){
    cout<<"Creating Ferrari....\n";
    SportsCar ferrari(2008,4,220);

    cout<<"Ferrari created, year: "<<ferrari.year_made();
    return 0;
}