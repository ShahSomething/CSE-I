#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num,sum=0,i=1;
    cout << "Enter an odd integer: ";//Display message
    cin>>num;
    //Logic for finding sum of odd integers
    while(i<=num)
    {
        sum=sum+i;
        i=i+2;
    }
    //Display message
    cout <<"The sum of odd natural numbers up to "<<num<<" is: "<<sum;
    return 0;
}
