#include <iostream>

using namespace std;

void Swap(int &a, int &b) //Function definition
{
    //Swapping Process
    a=a+b;
    b=a-b;
    a=a-b;
}

int main()
{
    int num1,num2; //Variable declaration
    cout << "Number1: "; //Display message
    cin>>num1; //Input num1
    cout<<"Number2: "; //Display message
    cin>>num2; //Input num2
    Swap(num1,num2); //Function Call
    cout<<"Num1: "<<num1; //Display num1
    cout<<"\nNum2: "<<num2; //Display num2
    return 0;
}
