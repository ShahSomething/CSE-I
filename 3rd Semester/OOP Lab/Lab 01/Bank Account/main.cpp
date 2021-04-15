#include <iostream>

using namespace std;

class BankAccount{
int balance;
public:
    BankAccount(){balance=1000;}
    void deposit(int a){balance+=a;}
    void withdraw(int a){
        if(balance<=500)
            cout<<"Insufficient Balance\n";
        else
            balance-=a;
    }
    void CurrentBalance(){
    cout<<"Current Balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount acc;
    acc.CurrentBalance();
    acc.deposit(500);
    acc.CurrentBalance();
    acc.withdraw(500);
    acc.CurrentBalance();
    acc.withdraw(500);
    acc.CurrentBalance();
    acc.withdraw(500);
    acc.CurrentBalance();
    return 0;
}
