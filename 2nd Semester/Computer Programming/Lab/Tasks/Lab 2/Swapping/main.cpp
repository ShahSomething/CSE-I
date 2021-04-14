#include <iostream>

using namespace std;

int main()
{
    //with third variable
    cout << "Using Third Variable " << endl<<endl;
    //Variable declaration
    int A,B,C;
    //Prompt the user to enter the values of A and B
    cout << "Enter the value of A: ";
    cin>>A;
    cout << "Enter the value of B: ";
    cin>>B;
    cout<<endl<<endl;
    //Before Swapping
    cout << "Before Swapping: " << endl;
    cout << "A= " << A << endl;
    cout << "B= " << B << endl<<endl;
    //Swapping Process
    C=A;
    A=B;
    B=C;
    //After Swapping
    cout << "After Swapping: " << endl;
    cout << "A= " << A << endl;
    cout << "B= " << B << endl<<endl;
    //without third variable
    cout << "Without Using Third Variable " << endl<<endl;
    //Enter the values to A and B again
    cout << "Enter the value of A: ";
    cin>>A;
    cout << "Enter the value of B: ";
    cin>>B;
    cout<<endl<<endl;
    //Before Swapping
    cout << "Before Swapping: " << endl;
    cout << "A= " << A << endl;
    cout << "B= " << B << endl<<endl;
    //Swapping Process
    A=A+B;
    B=A-B;
    A=A-B;
    //After Swapping
    cout << "After Swapping: " << endl;
    cout << "A= " << A << endl;
    cout << "B= " << B << endl;
    return 0;
}
