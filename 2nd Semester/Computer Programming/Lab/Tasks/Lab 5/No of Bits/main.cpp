#include <iostream>

using namespace std;

int bits(int a) //Definition of bits function
{
    int b=0;
    while(a!=0)
    {
        b++;
        a=a>>1;
    }
    return b;
}
int main()
{
    int num,out; //Variable declaration
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    out=bits(num); //Calling bits function
    cout<<"This Number requires minimum "<<out<<" Number of bits"; //Display number of bits
    return 0;
}
