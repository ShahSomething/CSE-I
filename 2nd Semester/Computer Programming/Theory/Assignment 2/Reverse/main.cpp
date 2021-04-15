#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num,rev=0,sum=0;
    cout << "Enter a Number: "; //Display message
    cin>>num; //Input bum
    int a=num;
    while(num!=0) //Loop
    {
        int remainder=num%10;
        rev=(rev*10)+remainder;
        sum=sum+remainder;
        num=num/10;
    }
    switch(a==rev)
    {
    case 1:
        cout<<"Num: "<<a<<", Reverse: "<<rev<<", Sum: "<<sum<<", Palindrome";
        break;
    case 0:
        cout<<"Num: "<<a<<", Reverse: "<<rev<<", Sum: "<<sum<<", Not a Palindrome";
        break;
    }
    return 0;
}
