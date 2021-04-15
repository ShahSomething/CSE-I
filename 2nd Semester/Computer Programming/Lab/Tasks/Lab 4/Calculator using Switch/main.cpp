#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    float num1,num2,result;
    char OP;
    cout << "Enter Operand1: "; //Display message
    cin>>num1; //Input num1
    cout<<"Enter Operator: "; //Display message
    cin>>OP; //Input num1
    cout<<"Enter Operand2: "; //Display message
    cin>>num2; //Input num1
    switch(OP) //Transfer control on the basis of the value of OP
    {
    case '+': //If OP is +
        cout<<"Result: "<<num1+num2; //Display sum
        break;
    case '-': //If OP is -
        cout<<"Result: "<<num1-num2; //Display difference
        break;
    case '*': //If OP is *
        cout<<"Result: "<<num1*num2; //Display Product
        break;
    case '/': //If OP is /
        cout<<"Result: "<<num1/num2; //Display Division
        break;
    default: //If OP is none of the above
        cout<<"Invalid Operator Used"; //Display message
    }
    return 0;
}
