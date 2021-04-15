#include <iostream>

using namespace std;
void input(int A[],int SIZE) //input Function Definition
{
    for (int i=0;i<SIZE;i++)
    {
        cin>>*(A+i);
    }
}
void Delete(int A[],int SIZE,int pos) //Delete Function Definition
{
    int i=pos-1;
    for(int c=0;c<SIZE-pos;c++,i++)
    {
        *(A+i)=*(A+i+1);
    }
    *(A+i)=0;
}
void Output(int A[],int SIZE) //Output Function Definition
{
    for(int i=0;i<SIZE;i++)
        cout<<*(A+i);
}
int main()
{
    int SIZE; //Variable declaration
    cout<<"Please enter the size of Array: "; //Display message
    cin>>SIZE; //Input SIZE
    int A[SIZE],pos;
    cout<<"Input Array: \n"; //Display message
    input(A,SIZE); //input Function Call
    cout<<"Input the position where to delete: ";//Display message
    cin>>pos; //Input pos
    Delete(A,SIZE,pos); //Delete Function Call
    cout<<"After Deleting: "; //Display message
    Output(A,SIZE); //Output Function Call
    return 0;
}
