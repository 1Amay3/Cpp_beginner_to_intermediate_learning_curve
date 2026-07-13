#include "account.hpp"

int main(){
    BankAccount a1(0,"111118888");
    a1.deposit(650);
    a1.withdraw(800);
    a1.withdraw(50);
    a1.withdraw(650);
    return 0;
}