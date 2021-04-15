#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1; //Variable declaration
    cout << "Fibonacci series up to 200: " << endl; //Display message
    cout<<a<<"  "; //Display a
    cout<<b<<"  "; //Display b
    for (int c=a+b;c<=200;c=a+b)//Fibonacci Series up to 200
    {
        cout<<c<<"  "; //Display c
        a=b;
        b=c;
    }
    return 0;
}
