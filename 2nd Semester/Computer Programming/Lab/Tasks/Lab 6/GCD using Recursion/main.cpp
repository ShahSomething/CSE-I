#include <iostream>

using namespace std;

int GCD(int a, int b) //Function definition
{
    //Finding GCD
    if(a>b)
        a=a-b;
    if(b>a)
        b=b-a;
    if(a==b)
        return a;
    else //Recursion
        GCD(a,b);

}

int main()
{
    int num1,num2,out; //Variable declaration
    cout << "Enter Num1: "; //Display message
    cin>>num1; //Input num1
    cout<<"Enter Num2: "; //Display message
    cin>>num2; //Input num2
    out=GCD(num1,num2); //Function Call
    cout<<"GCD: "<<out; //Display GCD
    return 0;
}
