#include <iostream>

using namespace std;
void input(int A[],int SIZE) //input Function Definition
{
    for (int i=0;i<SIZE;i++)
    {
        cin>>*(A+i);
    }
}
void TakeToEnd(int A[],int SIZE,int num) //TakeToEnd Function Definition
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE-1;j++)
        {
            if(*(A+j)==num)
            {
                int temp=*(A+j);
                *(A+j)=*(A+j+1);
                *(A+j+1)=temp;
            }
        }
    }
}
void Output(int A[],int SIZE) //Output Function Definition
{
    for(int i=0;i<SIZE;i++)
        cout<<*(A+i);
}
int main()
{
    int SIZE; //Variable declaration
    cout<<"Enter the size of Array: "; //Display message
    cin>>SIZE; //Input SIZE
    int A[SIZE],num;
    cout<<"Input an Array: \n"; //Display message
    input(A,SIZE); //input Function Call
    cout<<"Enter a number: "; //Display message
    cin>>num; //Input num
    TakeToEnd(A,SIZE,num); //TakeToEnd Function Call
    cout<<"After taking "<<num<<" to the end: "; //Display message
    Output(A,SIZE); //Output Function Call
    return 0;
}
