#include <iostream>

using namespace std;
void input(int A[6]) //input Function Definition
{
    for(int i=0;i<6;i++)
    {
        cout<<"Marks of Student "<<i+1<<" : ";
        cin>>A[i];
    }
}
void PF(int A[6]) //PF Function Definition
{
    int pass=0,fail=0; //Variable Declaration
    for(int i=0;i<6;i++)
    {
        if(A[i]>=50)
            pass++; //Increment Pass
        else
            fail++; //Increment Fail
    }
    cout<<"Pass: "<<pass; //Display pass
    cout<<"\nFail: "<<fail<<endl; //Display fail
}
void result (int A[6]) //result Function Definition
{
    //Bubble Sorting
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(A[j]<A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(int i=0;i<6;i++)
        cout<<A[i]<<endl;
}
int main()
{
    int A[6]; //Array Declaration
    cout<<"Enter the Marks of Students: \n"; //Display message
    input(A); //Function Call
    PF(A); //Function Call
    cout<<"Result Position-wise: \n";
    result(A); //Function Call
    return 0;
}
