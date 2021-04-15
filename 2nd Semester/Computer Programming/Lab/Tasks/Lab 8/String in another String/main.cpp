#include <iostream>
#include <stdio.h>
#define SIZE 20
using namespace std;

int main()
{
    char A1[SIZE],A2[SIZE];
    cout<<"Enter a string: ";
    gets(A1);
    cout<<"Enter a sub string: ";
    gets(A2);
    int i=0,b=0,counter=0;
    for (;A1[i]!='\0';i++); //String length of A1
    for (;A2[b]!='\0';b++); //String length of A2
    for(int a=0;a<i;a++)
    {
        int c=0;
        for(;c<b;c++)
        {
            if (A1[a+c]!=A2[c])
                break;
        }
        if (c==b)
            counter++;
    }

    cout<<"The sub string appeared "<<counter<<" times in the main string";
    return 0;
}
