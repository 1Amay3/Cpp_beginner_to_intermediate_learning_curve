#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    double balance;
    string account_number;
public:
    BankAccount(double money,string acc_num):balance(money),account_number(acc_num){}

    bool deposit(double money) const{
        balance+=money;
        cout<<"Deposit successful. New balance: $"<<balance<<".\n";
        return true;
    }

    bool withdraw(double money) const{
        if(money>balance){
            cout<<"Withdraw failed: Insufficient balance.\n";
            return false;
        }
        else if(money<0){
            cout<<"Withdraw failed: Amount must be positive.\n";
            return false;

        }
        else{
        balance-=money;
        cout<<"Withdraw successful. New balance: $"<<balance<<".\n";
        }
        return true;
    }

};