#include <iostream>

using namespace std;
const int SIZE=5;
void input(int A[SIZE]) //input Function Definition
{
    for(int i=0;i<SIZE;i++)
        cin>>A[i];
}
void bubblesort(int A[SIZE]) //bubblesort Function Definition
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
float Mean(int A[SIZE]) //Mean Function Definition
{
    float sum=0;
    for(int i=0;i<SIZE;i++)
        sum=sum+A[i];
    return sum/SIZE;
}
float Median(int A[SIZE]) //Median Function Definition
{
    float med;
    if(!(SIZE%2))
    {
        med=(A[SIZE/2]+A[SIZE/2-1])/2;
    }
    else
        med=A[SIZE/2];
    return med;
}
int Mode(int A[SIZE]) //Mode Function Definition
{
    int number = A[0];
    int mode = number;
    int count = 1;
    int countMode = 1;

    for (int i=1; i<SIZE; i++)
    {
        if (A[i] == number)
        {
            ++count;
        }
        else
        {
            count = 1;
            number = A[i];
        }
        if (count > countMode)
        {
              countMode = count;
              mode = number;
        }
    }
    return mode;
}

int main()
{
    int A[SIZE]; //Array Declaration
    cout<<"Enter an Array: \n"; //Display message
    input(A); //input Function Call
    bubblesort(A); //bubblesort Function call
    cout<<"Mean: "<<Mean(A)<<endl; //Display mean
    cout<<"Median: "<<Median(A)<<endl; //Display median
    cout<<"Mode: "<<Mode(A)<<endl; //Display mode
    return 0;
}
