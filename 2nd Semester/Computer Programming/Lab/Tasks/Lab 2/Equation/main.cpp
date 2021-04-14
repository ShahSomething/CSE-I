#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int a,b,c,d,e;
    float res;
    /*Prompt the user to enter
    the values of a,b,c,d and e */
    cout << "Enter the integer a"<<endl;
    cin >> a ;
    cout << "Enter the integer b"<<endl;
    cin >> b;
    cout << "Enter the integer c"<<endl;
    cin >> c;
    cout << "Enter the integer d"<<endl;
    cin >> d;
    cout << "Enter the integer e"<<endl;
    cin >> e;

    //Calculation
    res= ((a*a*a+b*b)-d/b)/(a*(b+c*(e+a)/b)-10);
    //Display the Result of the equation
    cout << "The result is:" << res;

    return 0;
}
