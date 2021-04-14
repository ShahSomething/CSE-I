#include <iostream>

using namespace std;

int main()
{
    //variable declaration
    int A,B,C,D,E,F;
    //Prompt the user to enter the values of A and B
    cout << "Enter the value of A: ";
    cin>>A;
    cout << "Enter the value of B: ";
    cin>>B;
    //Calculations
    C=A&B;D=A|B;E=~A;F=A^B;
    //Results of the calculations
    cout << "Value of C= " << C << endl;
    cout << "Value of D= " << D << endl;
    cout << "Value of E= " << E << endl;
    cout << "Value of F= " << F << endl;
    return 0;
}
