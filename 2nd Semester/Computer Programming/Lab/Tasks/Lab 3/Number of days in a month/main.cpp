#include <iostream>

using namespace std;

int main()
{
    int num; //variable declaration
    cout << "Enter the Month number: ";
    cin>>num; //input num
    if(num<8) //check condition
    {
        if(num==2) //check condition
            cout<<"Number of Days: 28 or 29"; //Display message
        else if(num%2==0) //check condition
            cout<<"Number of Days: 30"; //Display message
        else
            cout<<"Number of Days: 31"; //Display message
    }
    else if(num<13) //check condition
    {
        if(num%2==0) //check condition
            cout<<"Number of Days: 31"; //Display message
        else
            cout<<"Number of Days: 30"; //Display message
    }
    else
        cout<<"Invalid Number of Month Entered!!!"; //Display message
    return 0;
}
