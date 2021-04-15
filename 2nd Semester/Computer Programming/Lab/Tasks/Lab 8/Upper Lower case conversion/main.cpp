#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    const int SIZE=20;
    char A[SIZE];
    gets(A);
    int i=0;
    for (;A[i]!='\0';i++); //String length of A
    for(int a=0;a<i;a++) //Conversion of Cases
    {
        if(A[a]>='a'&&A[a]<='z')
            A[a]=A[a]-32;
        else if(A[a]>='A' && A[a]<='Z')
            A[a]=A[a]+32;
    }
    for(int a=0;a<i;a++) //Display A
        cout<<A[a];
    return 0;
}
