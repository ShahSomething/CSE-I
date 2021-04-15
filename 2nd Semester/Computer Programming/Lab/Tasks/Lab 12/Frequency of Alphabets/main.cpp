#include <iostream>
#include <stdio.h>
using namespace std;
const int SIZE=100;
void input(char* A)
{
   gets(A);
}
void frequency(char *A)
{
    for(int i=65;i<=90;i++)
    {
        int counter=0;
        for (int a=0;A[a]!='\0';a++)
        {
            if (A[a]==i||A[a]==i+32)
                counter++;
        }
        cout<< (char) i <<" : "<<counter<<endl;
    }
}
int main()
{
    char arr[SIZE];
    cout <<"Enter a string: \n";
    input(arr);
    cout<<"Frequency of Alphabets: \n";
    frequency(arr);
    return 0;
}
