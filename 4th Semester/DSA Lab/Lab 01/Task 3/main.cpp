#include <iostream>

using namespace std;

int *NewArray(int arr[],int SIZE)
{
    int *ptr;
    ptr = new int[SIZE*2];
    int i=0;
    for(;i<SIZE;i++)
        *(ptr+i)=arr[i];
    for(;i<SIZE*2;i++)
        *(ptr+i)=-1;
    return ptr;
}

int main()
{
    int SIZE;
    cout<<"Enter the Size of Array: ";
    cin>>SIZE;
    int Array[SIZE];
    cout<<"Enter the Elements of Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>Array[i];
    int *ptr = NewArray(Array,SIZE);
    cout<<"New Array: ";
    for(int i=0;i<SIZE*2;i++)
        cout<<*(ptr+i)<<"  ";
    delete[] ptr;
    return 0;
}
