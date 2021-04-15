#include <iostream> /* library for writing the output to console window*/

using namespace std;

int main()
{
    //Variable declaration
    char C;
    //Ask for the value of C from user
    cout << "Enter the Character: ";
    cin>>C;//Value of C
    //White spacing
    cout<<"\n";
    //Condition for Capital letters
    if (C>=65 && C<=90)
        cout<<"The character you entered is a Capital letter";
    //Condition for lowercase letters
    else if(C>=97 && C<=122)
        cout<<"The character you entered is a lowercase letter";
    //Condition for Digits
    else if(C>=48 && C<=57)
        cout<<"The character you entered is a Digit";
    else
        cout<<"The character you entered is a Special character";
    return 0;
}
