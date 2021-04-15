#include <iostream>

using namespace std;

int main()
{
    const int SIZE=5;
    int A[SIZE],B[SIZE],sum[SIZE],prod[SIZE];
    cout<<"Enter the first Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>A[i];
    cout<<"Enter the second Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>B[i];
    for(int i=0;i<SIZE;i++)
        sum[i]=A[i]+B[i];
    for(int i=0;i<SIZE;i++)
        prod[i]=A[i]*B[i];
    cout<<"Sum = ";
    for(int i=0;i<SIZE;i++)
        cout<<sum[i]<<"   ";
    cout<<"\nProduct = ";
    for(int i=0;i<SIZE;i++)
        cout<<prod[i]<<"   ";

    return 0;
}
