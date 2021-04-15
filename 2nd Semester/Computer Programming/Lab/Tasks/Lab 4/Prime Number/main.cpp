#include <iostream>

using namespace std;

int main()
{
    int num,i=2,test=0;//Variable declaration
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    if(num>=1 && num<=300) //If Number is between 1 and 300
    {
        while(i<=num) //Loop repetition from i to num
        {
            if(num%i==0)
            {
                test++;
            }
            i++;
        }
        switch(test) //Transfer of control based on the value of test
        {
        case 0 ... 1: //Prime Number
            cout<<num<<" is a PRIME number"; //Display message
            break;
        default: //Composite Number
            cout<<"This is not a prime number"; //Display message
        }
    }
    else //Number is not between 1 and 300
        cout<<"This number is not in the range(1-300)"; //Display message
    return 0;
}
