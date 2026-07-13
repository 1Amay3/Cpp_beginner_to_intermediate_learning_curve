/*
Exercise 3: Book Class For Data Retrieval
Practice Problem: Design a Book class with private members std::string title, std::string author, 
and std::string isbn. Include a constructor to initialize them. Implement a public method 
get_details() that returns a single formatted std::string containing all the book’s information.

Expected Output:

Book Record:
Title: The C++ Programming Language | Author: Bjarne Stroustrup | ISBN: 0321563840
*/
#include "books.hpp"
#include <string>

int main(){
    string title="The c++ Programming Language";
    string auth=e"Bjarne Stroustrup";
    string num="0321563840";
    Book b1(title,auth,num);
    cout<<"Book Record: "<<endl<<b1.get_details();
    return 0;
    
}