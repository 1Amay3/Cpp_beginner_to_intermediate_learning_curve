#include "animal.hpp"

int main(){
    cout<<"----Generic Animal Behviour----\n";
    Animal a1;
    a1.eat();
    a1.sleep();
    cout<<"----Dog Behaviour----\n";
    Animal* d1 = new Dog;
    d1->eat();
    d1->sleep();
    //d1->bark();
    return 0;
}