#ifndef BOOKS_H
#define BOOS_H

#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string title;
    string author;
    string isbn;
public:
    Book(string a,string b,string is):title(a),author(b),isbn(is){}

    string get_details(){
        string out = "Title: "+title+" | Author: "+author+" | ISBN: "+isbn+"\n";
        return out;
    }
};

#endif