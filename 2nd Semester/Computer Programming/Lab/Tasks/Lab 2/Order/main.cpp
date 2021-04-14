#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int A,B,C;
    //Prompt the user to enter the values of A, B and C
    cout << "Enter the value of A " << endl;
    cin>>A;
    cout << "Enter the value of B " << endl;
    cin>>B;
    cout << "Enter the value of C " << endl;
    cin>>C;
    //Forward order
    cout << "Forward Order: " << A <<", "<< B <<", "<< C << endl;
    //Reverse order
    cout << "Reverse Order: " << C <<", "<< B <<", "<< A << endl;
    return 0;
}
