#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    const int SIZE=100;
    int characters=0,words=1;
    char A[SIZE];
    cout<<"Enter a string: \n";
    gets(A);
    for(int i=0;A[i]!='\0';i++)
    {
        characters++;
        if(A[i]==' ')
            words++;
    }
    cout<<"No of characters: "<<characters;
    cout<<"\nNo of Words: "<<words;
    return 0;
}
