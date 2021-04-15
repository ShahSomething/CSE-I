#include <iostream>

using namespace std;

int main()
{
    const int SIZE=10;
    int A[SIZE],counter=0;
    cout<<"Enter an Array: ";
    for(int i=0;i<SIZE;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<SIZE;i++)
    {
        if(A[i]==5)
            counter++;
    }
    cout<<"No of 5 (s) in this array: "<<counter;
    return 0;
}
