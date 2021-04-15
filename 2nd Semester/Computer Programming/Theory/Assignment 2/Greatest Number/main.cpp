#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num,greatest_number=0;
    do //Loop
    {
        cout<<"Enter a number: "; //Display message
        cin>>num;//Input num
        if(num>greatest_number)
        {
            greatest_number=num;
        }
    }while(num!=-1);
    cout<<"The greatest number you entered is: "<<greatest_number;
    return 0;
}
