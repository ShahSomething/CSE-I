#include <iostream>

using namespace std;

int pow (int base,int exponent) //Function definition
{
    static int power=1; //Variable declaration
    power=power*base;
    exponent--; //Decrement exponent
    if(exponent==0) //Function terminates when exponent is 0
        return power;
    else //Recursion
        pow(base,exponent);
}
int main()
{
    int base,exp; //Variable declaration
    cout<<"Base: "; //Display message
    cin>>base; //Input base
    cout<<"Exponent: "; //Display message
    cin>>exp; //Input exp
    int out=pow(base,exp); //Function Call
    cout<<"Result: "<<out; //Display Power
    return 0;
}
