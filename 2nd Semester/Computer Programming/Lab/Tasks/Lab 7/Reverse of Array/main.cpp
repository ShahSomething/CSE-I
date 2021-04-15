#include <iostream>

using namespace std;

int main()
{
    const int SIZE=4;
    int A[SIZE];
    cout<<"Enter an Array: \n";
    for(int i=0;i<SIZE;i++) //Input Array
        cin>>A[i];
    cout<<"Reverse of this Array is: ";
    for(int i=SIZE-1;i>=0;i--) //Display reversed Array
        cout<<A[i];
    return 0;
}
