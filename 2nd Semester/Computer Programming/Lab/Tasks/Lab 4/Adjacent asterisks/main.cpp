d#include <iostream>

using namespace std;

int main()
{
    int num,i=1; //Variable declaration
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    switch(num>=1 && num<=25) //Check whether num is between 1 and 25 or not
    {
    case 1: //num is between 1 and 25
        while(i<=num) //Loop repetition from i to num
        {
            cout<<" * "; //Display asterisks
            i++; //Increment i
        }
        break;
    case 0: //Num is not between 1 and 25
        cout<<"Please enter a number between 1 and 25"; //Display message
    }
    return 0;
}
