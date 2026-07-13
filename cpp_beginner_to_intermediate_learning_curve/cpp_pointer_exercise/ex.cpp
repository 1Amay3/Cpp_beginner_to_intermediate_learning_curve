/*
Declare an integar name "value", init it to 100. Declare an int pointer named ptr. Assign memory address of value to ptr.
Print int stored in value by using only ptr.*/

#include <iostream>

int main(){int value = 100;
int* ptr = &value;

std::cout <<"The value is: "<<*ptr<<std::endl;
return 0;
}