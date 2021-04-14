#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int A,B,C;
    cout << "Angle 1: ";
    //Input value of A
    cin>>A;
    cout << "Angle 2: ";
    //Input value of B
    cin>>B;
    cout << "Angle 3: ";
    //Input value of C
    cin>>C;
    //Finding whether a triangle is valid or not using ternary operator
    ((A+B+C)==180)?cout<<"Valid Triangle":cout<<"Invalid Triangle";
    return 0;
}
