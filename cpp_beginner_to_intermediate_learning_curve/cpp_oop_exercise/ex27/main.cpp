#include "library.hpp"

int main(){
    Library newman;
    Book b1("C++ Primer","Harry Kane","ABCD123");
    Book b2("Effective Modern C++","Wayne Rooney","John Terry");

    newman.add_book(&b1);
    newman.add_book(&b2);
    newman.list_books();
    return 0;
}