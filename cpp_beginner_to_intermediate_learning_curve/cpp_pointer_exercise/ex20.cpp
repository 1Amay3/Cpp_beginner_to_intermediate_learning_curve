/*
Exercise 20: Callback Function
Practice Problem: Define two simple functions: multiply(int, int) and 
subtract(int, int). Write a function called compute_result that takes three arguments:
two integers and a function pointer (which must match the signature of multiply 
or subtract). Inside compute_result, use the function pointer to perform the 
operation on the two integers and return the result. Use compute_result to call both 
multiply and subtract.

Given:

int x = 50;
int y = 10;
Expected Output:

Multiplication result: 500
Subtraction result: 40
*/
#include <iostream>
using namespace std;

int multiply(int a, int b){
    //cout<<"Multiplication result: "<<a*b<<endl;
    return a*b;
}
int subtract(int a, int b){
    //cout<<"Subtraction result: "<<a-b<<endl;
    return a-b;
}
int compute_result(int a,int b,int (*func)(int, int)){
    return (*func)(a,b);

}
int main(){
    //int (*mult)=multiply(,);
    int a=50;
    int b =10;
    cout<<"Multiplication result: "<<compute_result(a,b,multiply)<<endl;
    cout<<"Subtraction result: "<<compute_result(a,b,subtract)<<endl;;
    return 0;
}