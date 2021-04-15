#include <iostream>

using namespace std;
void bubblesort(int A[],int SIZE) //bubblesort Function Definition
{
    for (int i=0;i<SIZE;i++)
    {
        for (int j=0;j<SIZE-1;j++)
        {
            if(*(A+j)<*(A+j+1))
            {
                int temp=*(A+j);
                *(A+j)=*(A+j+1);
                *(A+j+1)=temp;
            }
        }
    }
}
void input(int A[],int SIZE) //input Function Definition
{
    for (int i=0;i<SIZE;i++)
    {
        cin>>*(A+i);
    }
}
int main()
{
    int SIZE; //Variable declaration
    cout<<"Enter the size of Array: "; //Display message
    cin>>SIZE; //Input SIZE
    int A[SIZE]; //Array Declaration
    cout<<"Enter Array: \n"; //Display message
    input(A,SIZE); //input Function Call
    bubblesort(A,SIZE); //bubblesort Function Call
    cout<<"The second largest number is: "<<*(A+1); //Display second largest number in Array
    return 0;
}
