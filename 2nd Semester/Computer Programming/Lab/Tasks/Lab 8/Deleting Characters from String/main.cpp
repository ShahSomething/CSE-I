#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    const int SIZE=20;
    char A[SIZE];
    int pos,n;
    cout<<"Enter the string: ";
    gets(A);
    cout<<"Enter position: ";
    cin>>pos;
    cout<<"Enter the no of characters you want to delete: ";
    cin>>n;
    int i=0;
    for(;A[i]!='\0';i++); //String length of A
    for(int a=pos-n,c=0;c<i-pos;a++,c++) //Deleting process
    {
        A[a]=A[pos+c];
    }
    A[i-n]='\0';
    cout<<A;
    return 0;
}
