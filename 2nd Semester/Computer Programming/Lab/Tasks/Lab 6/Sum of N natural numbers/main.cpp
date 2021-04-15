#include <iostream>

using namespace std;

int sum(int N) //Function definition
{
    static int i=1,Sum=0; //Variable declaration
    Sum+=i;
    i++; //Increment i
    if(i>N) //Function terminates when i>N
        return Sum;
    else //Recursion
        sum(N);
}

int main()
{
    int N,out; //Variable declaration
    cout<<"Enter N: "; //Display message
    cin>>N; //Input N
    out=sum(N); //Function Call
    cout<<"Sum of Natural numbers up to "<<N<<" is "<<out; //Display sum
    return 0;
}
