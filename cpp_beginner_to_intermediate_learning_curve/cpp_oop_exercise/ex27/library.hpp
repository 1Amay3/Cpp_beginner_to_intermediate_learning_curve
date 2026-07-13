/*
Exercise 27: Library System as a Aggregation Example
Practice Problem: Model a Library class that uses aggregation to manage a collection of Book objects (pointers). Implement a method add_book(Book* book) to accept externally created books and a method list_books(). Assume the Book class exists (from exercise 3).

Given:

class Book {
private:
    std::string title;
public:
    Book(std::string t) : title(t) {}
    
    // CORRECTION: Return type changed from void to std::string
    std::string get_details() const { 
        return "  - Book Title: " + title;
    }
};
Expected Output:

[Library] Added:   - Book Title: C++ Primer
[Library] Added:   - Book Title: Effective Modern C++

--- Central Library Catalog ---
  - Book Title: C++ Primer
  - Book Title: Effective Modern C++

Library closed. (Books remain in memory until explicitly deleted.)

*/

#include "books.hpp"
#include <vector>

class Library{
    private:
        vector<Book*> books;
    public:
        void add_book(Book* a){
            cout<<"[Library] Added: -Book title: "<<a->get_title()<<"\n";
            books.push_back(a);
        }
        void list_books(){
            cout<<"--- Central Library Catalog --- \n";
            for(auto& x:books){
                cout<<"- Book Title: "<<x->get_title()<<"\n";
            }
        }
        ~Library(){
            cout<<"Library Closed.\n";
        }
};