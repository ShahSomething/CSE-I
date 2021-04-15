#include <iostream>

using namespace std;

int main()
{
    int num1,num2,sum=0; //Variable declaration
    cout << "Enter the First number: "; //Display message
    cin>>num1; //Input num1
    cout << "Enter the Second number: "; //Display message
    cin>>num2; //Input num2
    cout<<"The sum of even numbers between "<<num1<<" and "<<num2<<" is: "; //Display message
    while(num1<=num2) //Loop repetition from num1 to num2
    {
        if(num1%2==0) //If number is even
        {
          sum+=num1; //Even numbers are added to sum
        }
        num1++; //Number incrementation
    }
    cout<<sum; //Display sum
    return 0;
}
