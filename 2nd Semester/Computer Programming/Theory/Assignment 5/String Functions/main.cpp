#include <iostream>

using namespace std;
const int SIZE=5;
int strlen(char A[]) //strlen Function Definition
{
    int i=0;
    for(;*(A+i)!='\0';i++);
    return i;
}
void strcmp(char A[],char B[]) //strcmp Function Definition
{
    int i=0;
    for(;*(A+i)!='\0' && *(B+i)!='\0';i++)
    {
        if (*(A+i)!=*(B+i))
            break;
    }
    if(i==strlen(A))
        cout<<"Strings are equal\n";
    else
        cout<<"Strings are not equal\n";
}
void strcat(char A[],char B[]) //strcat Function Definition
{
    int lA=strlen(A);
    int i=lA;
    for(int a=0;*(B+a)!='\0';a++,i++)
    {
        *(A+i)=*(B+a);
    }
    *(A+i)='\0';
}
void strrev(char A[]) //strrev Function Definition
{
    for(int i=strlen(A)-1;i>=0;i--)
        cout<<*(A+i);
}
void strcpy (char A[],char B[]) //strcpy Function Definition
{
    int i=0;
    for(;*(B+i)!='\0';i++)
    {
        *(A+i)=*(B+i);
    }
    *(A+i)='\0';
}
void Tolower(char A[]) //Tolower Function Definition
{
    for(int i=0;*(A+i)!='\0';i++)
    {
        if (*(A+i)>='A'&&*(A+i)<='Z')
            *(A+i)=*(A+i)+32;
    }
}
void Toupper(char A[]) //Toupper Function Definition
{
    for(int i=0;*(A+i)!='\0';i++)
    {
        if (*(A+i)>='a'&&*(A+i)<='z')
            *(A+i)=*(A+i)-32;
    }
}
int main()
{
    char A[SIZE],B[SIZE]; //Array Declaration
    cout<<"Enter string 1: "; //Display message
    cin>>A; //input Array A
    cout<<"Enter string 2: "; //Display message
    cin>>B; //input Array B
    cout<<"Comparison: "; //Display message
    strcmp(A,B); //Function Call
    strcat(A,B); //Function Call
    cout<<"After Concatenation:  "<<A; //Display message
    cout<<"\nAfter Reversing:  "; //Display message
    strrev(A); //Function Call
    Tolower(A); //Function Call
    cout<<"\nLower case A: "<<A; //Display message
    Toupper(A); //Function Call
    cout<<"\nUpper case A: "<<A; //Display message
    strcpy(A,B); //Function Call
    cout<<"\nAfter Copying B to A:  "<<A; //Display message
    return 0;
}
