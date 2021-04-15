#include <iostream>

using namespace std;

int main()
{
    int num,sum=0; //Variable declaration
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    int a=num;
    while(num!=0)
    {
        int remainder=num%10;
        sum=sum+(remainder*remainder*remainder);
        num=num/10;
    }
    if(sum==a)
        cout<<"This is an Armstrong number";
    else
        cout<<"This is not an Armstrong number";
    return 0;
}
