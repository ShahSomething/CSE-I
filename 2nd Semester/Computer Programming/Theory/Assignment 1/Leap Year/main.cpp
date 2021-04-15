#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int Year;
    cout << "Enter Year: ";
    //Input value of Year
    cin>>Year;
    cout<<"\n";
    //Condition for leap year
    if(Year%4==0 && (Year%100!=0 || (Year%100==0 && Year%400==0)))
    {
        cout<<"This is a leap year";
    }
    //Not a leap year
    else
        cout<<"This is a not leap year";
    return 0;
}
