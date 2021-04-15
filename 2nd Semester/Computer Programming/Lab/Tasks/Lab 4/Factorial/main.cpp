#include <iostream>

using namespace std;

int main()
{
    int num,i=1,factorial=1; //Variable declaration
    cout << "Enter a number: "; //Display message
    cin>>num; //Input num
    while(i<=num) //Loop repetition from i to num
    {
        factorial*=i; //Calculating factorial
        i++; //Increment i
    }
    cout<<"Factorial of "<<num<<" is: "<<factorial; //Display factorial
    return 0;
}
