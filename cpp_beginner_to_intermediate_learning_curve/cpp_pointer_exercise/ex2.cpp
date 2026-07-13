/*Exercise 2: Changing Value via Pointer
Practice Problem: Declare an integer variable named number initialized to 50. Declare an integer pointer named num_ptr and make it point to number. Change the value of number to 99 using only the pointer num_ptr. Print the final value of the variable number.*/

#include <iostream>

using namespace std;

int main(){

    int number=50;
    int* num_ptr = &number;
    *num_ptr=99;
    cout<<"The final value of number is :"<<number<<endl;
    return 0;
}
