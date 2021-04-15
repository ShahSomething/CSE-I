#include <iostream>

using namespace std;

void input(int A[],int n)
{
    for(int i=0;i<n;i++)
        cin>>A[i];
}

void printArray(int A[],int n)
{
    for (int i=0;i<n;i++)
        cout<<A[i]<<" ";
}

void revArray(int A[],int n)
{
    int x=n;
    for(int i=0;i<n/2;i++)
    {
        int temp=A[i];
        A[i]=A[--x];
        A[x]=temp;
    }
}

int main()
{
    int Size;
    cout<<"Array Size: ";
    cin>>Size;
    int Array[Size];
    cout<<"Array content: \n";
    input(Array,Size);
    cout<<"Array before Reversing: ";
    printArray(Array,Size);
    revArray(Array,Size);
    cout<<"\nArray after Reversing: ";
    printArray(Array,Size);
    return 0;
}
