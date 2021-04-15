#include <iostream>

using namespace std;

int factorial(int a) //Definition of factorial function
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int N; //Variable declaration
    cout << "Enter N:"; //Display message
    cin>>N; //Input N
    for(int i=1;i<=N;i++)
    {
        int out=factorial(i); //Calling factorial function
        cout<<"Factorial of "<<i<<" is "<<out<<endl; //Display factorial of i
    }
    return 0;
}
