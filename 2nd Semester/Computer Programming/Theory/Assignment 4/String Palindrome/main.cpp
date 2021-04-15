#include <iostream>

using namespace std;

int main()
{
    const int SIZE=20;
    char A[SIZE];
    int i=0;
    cout<<"Enter a String: ";
    cin>>A;
    for(;A[i]!='\0';i++); //Size of string
    int half=i/2;
    int a=0;
    for(;a<half;a++)
    {
        if(A[a]!=A[--i])
            break;
    }
    if(a==half)
        cout<<"This string is palindrome";
    else
        cout<<"This is not a palindrome";

    return 0;
}
