#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    const int SIZE=20;
    char A1[SIZE],A2[SIZE];
    int pos;
    cout<<"Enter First string: ";
    gets(A1);
    cout<<"Enter second string: ";
    gets(A2);
    cout<<"Enter the position where item has to be inserted: ";
    cin>>pos;
    int i=0,b=0;
    for(;A1[i]!='\0';i++); //String length of A1
    for (;A2[b]!='\0';b++); //String length of A2
    for(int a=i-1,c=0;c<i-b;a--,c++) // Shifting
    {
        A1[a+b]=A1[a];

    }
    A1[i+b]='\0';
    for (int a=pos,c=0;c<b;a++,c++) // Inserting
    {
        A1[a]=A2[c];
    }
    cout<<A1;
    return 0;
}
