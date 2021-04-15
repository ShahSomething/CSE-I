#include <iostream>

using namespace std;

int sum(int N) //Function definition
{
    static int i=1,Sum=0; //Variable declaration
    Sum+=i;
    i=i+2; //Increment by 2
    if(i>N) //Function terminates when i>N
        return Sum;
    else //Recursion
        sum(N);
}

int main()
{
    /*int num,i=1,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(i<=num)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"Sum of odd natural numbers up to "<<num<<" is: "<<sum;*/
    int N,out; //Variable declaration
    cout<<"Enter N: "; //Display message
    cin>>N; //Input N
    out=sum(N); //Function Call
    cout<<"Sum of Odd Natural numbers up to "<<N<<" is "<<out; //Display sum
    return 0;
}
