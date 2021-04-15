#include <iostream>

using namespace std;
const int SIZE=6,size2=3;
void input(int A[SIZE]) //input Function Definition
{
    for (int i=0;i<SIZE;i++)
    {
        cin>>*(A+i);
    }
}
void inputb(int A[size2]) //inputb Function Definition
{
    for (int i=0;i<size2;i++)
    {
        cin>>*(A+i);
    }
}
void subset(int A[SIZE],int B[size2]) //subset Function Definition
{
    int counter=0;
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(*(B+j)==*(A+i))
                counter++;
        }
    }
    if(counter==size2)
        cout<<"This is a subset of main Array";
    else
        cout<<"This is not a Subset of main Array";
}
int main()
{
    int A[SIZE],B[size2]; //Array Declaration
    cout<<"Input main Array: \n"; //Display message
    input(A); //input Function Call
    cout<<"Input subset: \n"; //Display message
    inputb(B); //inputb Function Call
    subset(A,B); //subset Function Call
    return 0;
}
