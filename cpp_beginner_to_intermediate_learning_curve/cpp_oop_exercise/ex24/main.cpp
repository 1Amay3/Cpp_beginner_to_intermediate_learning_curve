/*
Exercise 24: Subscript Operator
Practice Problem: Create a simple ArrayWrapper class that holds a private array of 
5 integers. Overload the subscript operator ([]) to allow access to the array 
elements using standard bracket notation. Implement basic boundary checking: 
if the index is out of bounds (0 to 4), throw an appropriate exception or 
print an error and exit.

Expected Output:

Initial arr[2]: 20
New arr[2]: 99
Boundary check for arr[5]
Error: Index out of bounds (0-4).
*/
#include <iostream>
#include <string>

using namespace std;

class ArrayWrapper{
    private:
        int arr[5] = {1,2,3,4,5};
    public:
        int& operator[](int x){
            
            if(x>4 || x<0){
                cout<<"Error: index out of bounds\n";
                exit(1);
            }            
            return arr[x];
            }
};
int main(){
    ArrayWrapper a1;
    a1[3] = 9;
    cout<<a1[3]<<"\n";
    return 0;
}
