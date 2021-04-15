#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    const int SIZE=100;
    char A[SIZE];
    int a=0,e=0,i=0,o=0,u=0,consonants=0,specialch=0;
    cout<<"Please enter a string: ";
    gets(A);

    for(int c=0;A[c]!='\0';c++)
    {
        if(A[c]=='a'||A[c]=='A')
            a++;
        else if(A[c]=='e'||A[c]=='E')
            e++;
        else if(A[c]=='i'||A[c]=='I')
            i++;
        else if(A[c]=='o'||A[c]=='O')
            o++;
        else if(A[c]=='u'||A[c]=='U')
            u++;
        else if((A[c]>=0 && A[c]<=64)||(A[c]>=91 && A[c]<=96)||(A[c]>=123 && A[c]<=127))
            specialch++;
        else
            consonants++;

    }
    cout<<"Frequency of vowels: \n";
    cout<<"A: "<<a<<endl;
    cout<<"E: "<<e<<endl;
    cout<<"I: "<<i<<endl;
    cout<<"O: "<<o<<endl;
    cout<<"U: "<<u<<endl<<endl<<endl;
    cout<<"Consonants: "<<consonants;
    return 0;
}
