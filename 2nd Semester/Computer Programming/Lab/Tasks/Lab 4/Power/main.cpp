#include <iostream>

using namespace std;

int main()
{
    int base,exp,result=1,i=1; //Variable declaration
    cout << "Enter the value of Base: "; //Display message
    cin>>base; //Input base
    cout<<"Enter the value of Exponent: "; //Display message
    cin>>exp; //Input exponent
    while(i<=exp) //Loop repetition from i to exp
    {
        result*=base; //Calculation
        i++; //Increment i
    }
    cout<<"The result is: "<<result; //Display result
    return 0;
}
