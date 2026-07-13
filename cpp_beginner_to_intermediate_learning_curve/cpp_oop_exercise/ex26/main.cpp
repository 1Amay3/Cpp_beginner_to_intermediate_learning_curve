#include "department.hpp"

int main(){
    Department HR;
    Employee e1("John","1122");
    Employee e2("Doe","1133");

    HR.add_employee(&e1);
    HR.add_employee(&e2);
    HR.retire(&e2);
    return 0;
    

}