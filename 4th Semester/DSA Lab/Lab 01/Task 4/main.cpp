#include <iostream>

using namespace std;

int *mergeArray(int arrA[],int SIZE1, int arrB[],int SIZE2)
{
    int *ptr;
    ptr = new int[SIZE1+SIZE2];
    int i=0;
    for(;i<SIZE1;i++)
        *(ptr+i)=arrA[i];
    for(int a=0;a<SIZE2;a++,i++)
        *(ptr+i)=arrB[a];
    return ptr;
}

int main()
{
    int SIZE1,SIZE2;
    cout<<"Enter the Size of First Array: ";
    cin>>SIZE1;
    int ArrayA[SIZE1];
    cout<<"Enter the Elements of Array: ";
    for(int i=0;i<SIZE1;i++)
        cin>>ArrayA[i];
    cout<<"Enter the Size of Second Array: ";
    cin>>SIZE2;
    int ArrayB[SIZE2];
    cout<<"Enter the Elements of Array: ";
    for(int i=0;i<SIZE2;i++)
        cin>>ArrayB[i];
    int *ptr = mergeArray(ArrayA,SIZE1,ArrayB,SIZE2);
    cout<<"New Array: ";
    for(int i=0;i<SIZE1+SIZE2;i++)
        cout<<*(ptr+i)<<"  ";
    delete[] ptr;
    return 0;
}
