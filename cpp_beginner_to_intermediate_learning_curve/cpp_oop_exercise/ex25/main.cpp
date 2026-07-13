/*
Exercise 25: Composition (Has-A relationship)
Practice Problem: Demonstrate Composition by creating a class Engine and a class Car. The Car class should contain an object of the Engine class (composition). The Engine class should have a method start() that prints “Engine started.” The Car class should have a method drive() that calls the Engine::start() method internally. The Engine should be initialized when the Car is constructed.

Expected Output:

EntEngine (V6) constructed.
Car (SedanX) assembled.

Starting SedanX drive.
--> V6 engine starting up...

End of main scope.
Car (SedanX) destroyed.
*/
#include <iostream>
#include <string>
using namespace std;

class Engine{
    private:
        string type;
    public:
        Engine(string x):type(x){}
        void start(){
            cout<<"Engine started.\n";
        }
        ~Engine(){
            cout<<type<<" engine destroyed.\n";
        }
};

class Car{
    private:
    Engine eng;
    string type;
    public:
        Car(Engine x,string y):eng(x),type(y){}
        void drive(){
            eng.start();
        }
        ~Car(){
            cout<<"Car ("<<type<<") destroyed.\n";
        }
};

int main(){
    Engine e1("V6");
    Car c1(e1,"SedanX");
    c1.drive();
    return 0;
}