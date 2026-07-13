/*
Exercise 8: Date Class with Validation
Practice Problem: Create a Date class with private members int day, int month, and int year. 
Implement a constructor that performs basic validation: if the month is not between 1 and 12, 
it should set the month to a default value (e.g., 1) and print an error message.

Expected Output:

Date 1: 2025-10-28
Valid Date: 2025-10-28
Date 2: 2025-13-1
Warning: Invalid month (13) provided. Setting to 1.
Valid Date: 2025-1-1
*/
#include "date.hpp"

int main(){
    Date d1(28,10,2025);
    
    Date d2(1,13,2025);


    return 0;
}