#include "account.hpp"

int main(){
    {BankAccount a1(500,"A101");
    {
    BankAccount a2(550,"A102");
    BankAccount a3(600,"A103");
    a1.acc_in_scope();
    }
    a1.acc_in_scope();
    return 0;
}
}