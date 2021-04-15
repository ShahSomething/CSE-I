#include <iostream>

using namespace std;

int fibonacci(int N) //Function definition
{
    static int a=0,b=1; //Variable declaration
    if(a==0)
        cout<<a<<"  "<<b<<"  ";
    int c=a+b; //Variable declaration
    a=b;
    b=c;
    cout<<c<<"  "; //Display c
    if(c>N)
        return 0;
    else //Recursion
        fibonacci(N);
}

int main()
{
    int num; //Variable declaration
    cout<<"Enter a number: "; //Display message
    cin>>num; //Input num
    fibonacci(num); //Function Call
    return 0;
}
