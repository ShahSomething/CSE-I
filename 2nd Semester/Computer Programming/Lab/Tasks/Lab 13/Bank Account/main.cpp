#include <iostream>
#include <stdio.h>
using namespace std;
const int SIZE=10;

struct BankAccount
{
    char name[30];
    int Ac_No;
    float balance;
}Account[SIZE];

void input(BankAccount *A)
{
    cout<<"Name: ";
    cin>>A->name;
    cout<<"Account No. : ";
    cin>>A->Ac_No;
    cout<<"Balance: ";
    cin>>A->balance;
}

void BalanceLessThan200 ()
{
    for(int i=0;i<SIZE;i++)
    {
        if(Account[i].balance<200)
        {
            cout<<Account[i].name<<endl;
        }
    }
}
void Add100 ()
{
    for(int i=0;i<SIZE;i++)
    {
        if(Account[i].balance>1000)
        {
            Account[i].balance+=100;
        }
    }
}

void display()
{
    int counter=0;
    for (int n=0;;n++)
    {
        for(int i=0;i<SIZE;i++)
        {
            if(Account[i].balance==n)
            {
                cout<<"\nName: "<<Account[i].name;
                cout<<"\nAccount No. :"<<Account[i].Ac_No;
                cout<<"\nBalance: "<<Account[i].balance;
                counter++;
                break;
            }
        }
        if(counter==SIZE)
            break;
    }
}
int main()
{
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Enter the information of customer"<<i+1<<":\n";
        input(&Account[i]);
    }
    cout<<"Customers that have balance less than 200: \n";
    BalanceLessThan200();
    Add100();
    cout<<"Account Balance in Ascending Order: \n";
    display();
    return 0;
}
