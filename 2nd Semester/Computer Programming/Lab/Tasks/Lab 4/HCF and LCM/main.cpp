#include <iostream>

using namespace std;

int main()
{
    int num1,num2; //Variable declaration
    cout << "Enter the First number: "; //Display message
    cin>>num1; //Input num1
    cout<<"Enter the Second number: "; //Display message
    cin>>num2; //Input num2
    int a=num1*num2;
    while(num1!=num2) //Repeat Loop when num1 is not equal to num2
    {
        if(num1>num2) //num1 is greater than num2
        {
            num1=num1-num2;
        }
        if(num2>num1) //num2 is greater than num1
        {
            num2=num2-num1;
        }
    }
    cout<<"HCF of these numbers is: "<<num1; //Display HCF
    int LCM=a/num1; //Calculation for LCM
    cout<<"\nLCM of these numbers is: "<<LCM; //Display LCM
    return 0;
}
