#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int A,B,C;
    //Prompt the user to enter values of A and B
    cout << "Enter the value of A" << endl;
    cin>>A;
    cout << "Enter the value of B" << endl;
    cin>>B;
    //white spacing
    cout<<endl;
    //Values before swapping
    cout << "Before Swapping:" << endl;
    cout << "value of A= " << A << endl;
    cout << "value of B= " << B << endl<<endl;
    //Swapping values using bitwise XOR operator
    C=A^B;
    A=C^A;
    B=C^B;
    //Values after swapping
    cout << "After Swapping:" << endl;
    cout << "value of A= " << A << endl;
    cout << "value of B= " << B << endl;
    return 0;
}
