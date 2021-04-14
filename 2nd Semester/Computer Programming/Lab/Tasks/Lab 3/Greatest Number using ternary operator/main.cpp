#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int A,B;
    cout << "Enter the value of A: ";
    //Input value of A
    cin>>A;
    cout << "Enter the value of B: ";
    //Input value of B
    cin>>B;
    //One line space
    cout<<"\n";
    //Finding greatest number using ternary operator
    (A>B)?(cout<<"A is greater than B"):((B>A)?(cout<<"B is greater than A"):(cout<<"Both are Equal"));
    return 0;
}
