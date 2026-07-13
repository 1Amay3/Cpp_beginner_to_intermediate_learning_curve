/*
Exercise 31: Friend Class
Practice Problem: Create two classes, Data (with a private member int value) and Accessor. Make class Accessor a friend class of Data. Implement a method display_value(const Data& d) inside Accessor that accesses and prints the private value of a Data object.

Expected Output:

Friend Accessor read Data value: 1234
*/
#include <iostream>
#include <string>
using namespace std;


class Data{
    private:
        int value;
    public:
        Data(int x):value(x){}
        friend class Accessor;
};
class Accessor{
    public:
        int display_value(const Data& d){
            return d.value;
        }
};