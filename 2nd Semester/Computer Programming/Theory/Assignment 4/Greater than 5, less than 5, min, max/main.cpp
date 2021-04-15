#include <iostream>

using namespace std;

int main()
{
    const int SIZE=10;
    int A[SIZE],Min,Max,Greater=0,Less=0;
    cout<<"Enter an Array: \n";
    for(int i=0;i<SIZE;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<SIZE;i++)
    {
        if(!i)
        {
           Min=A[i];
           Max=A[i];
        }
        if(A[i]>Max)
            Max=A[i];
        if(A[i]<Min)
            Min=A[i];
        if(A[i]>5)
            Greater++;
        if(A[i]<5)
            Less++;
    }
    cout<<"Min: "<<Min;
    cout<<"\nMax: "<<Max;
    cout<<"\nNo of elements that are Greater than 5: "<<Greater;
    cout<<"\nNo of elements that are Less than 5: "<<Less;
    return 0;
}
