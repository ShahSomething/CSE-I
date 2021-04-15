#include <iostream>

using namespace std;

int main()
{
    const int SIZE=4;
    int A[SIZE];
    for(int i=0;i<SIZE;i++) //Input Array
    {
        cout<<"Enter a Number: ";
        cin>>A[i];
    }
    int Max=A[0];
    for(int i=0;i<SIZE;i++) //Finding Max
    {
        if(A[i]>Max)
            Max=A[i];
    }
    cout<<"Max= "<<Max; //Display Max
    return 0;
}
