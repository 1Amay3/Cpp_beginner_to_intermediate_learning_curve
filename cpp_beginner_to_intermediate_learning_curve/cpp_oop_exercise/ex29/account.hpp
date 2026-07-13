/*
Exercise 29: Static Member Variable
Practice Problem: In the BankAccount class (from Exercise. 10), add a private static member int total_accounts initialized to 0. Increment this counter in the constructor and decrement it in the destructor. Print the value in the constructor and destructor to demonstrate tracking.

Expected Output:

Start (Initial count: 0)
Account A101 opened. Total accounts: 1
Account A102 opened. Total accounts: 2
Account A103 opened. Total accounts: 3
Current total inside scope: 3
Account A103 closed. Total accounts remaining: 2
Account A102 closed. Total accounts remaining: 1
End of scope total: 1
Account A101 closed. Total accounts remaining: 0
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
    double balance;
    string account_number;
    static int total_accounts;
public:
    BankAccount(double money,string acc_num):balance(money),account_number(acc_num){

        total_accounts++;
        cout<<"Account "<<account_number<<" opened. Total accounts: "<<total_accounts<<"\n";
    }
    ~BankAccount(){
        total_accounts--;
        cout<<"Account "<<account_number<<" closed. Total accounts remaining: "<<total_accounts<<"\n";

    }

    void acc_in_scope(){
        cout<<"Current total inside scope: "<<total_accounts<<endl;
    }

    bool deposit(double money) {
        balance+=money;
        cout<<"Deposit successful. New balance: $"<<balance<<".\n";
        return true;
    }

    bool withdraw(double money){
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
int BankAccount::total_accounts = 0;