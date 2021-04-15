#include <iostream>

using namespace std;

int factorial(int num) //Function definition
{
    if (num==0 || num==1) //Factorial of 0 and 1
        return 1;
    else //Recursion
    {
        int fact=num*factorial(num-1);
        return fact;
    }
}

int main()
{
    int num; //Variable declaration
    cout<<"Enter a Number: "; //Display message
    cin>>num; //Input num
    int out=factorial(num); //Function Call
    cout<<"Factorial: "<<out; //Display Factorial
    return 0;
}
