#include <iostream>

using namespace std;
void input(int A[],int SIZE) //input Function Definition
{
    for(int i=0;i<SIZE;i++)
        cin>>*(A+i);
}
void bubblesort(int A[],int SIZE) //bubblesort Function Definition
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE-1;j++)
        {
            if(*(A+j)>*(A+j+1))
            {
                int temp=*(A+j);
                *(A+j)=*(A+j+1);
                *(A+j+1)=temp;
            }
        }
    }
}
float Mean(int A[],int SIZE) //Mean Function Definition
{
    float sum=0;
    for(int i=0;i<SIZE;i++)
        sum=sum+*(A+i);
    return sum/SIZE;
}
float Median(int A[],int SIZE) //Median Function Definition
{
    float med;
    if(!(SIZE%2))
    {
        med=(*(A+(SIZE/2))+*(A+(SIZE/2-1)))/2;
    }
    else
        med=*(A+(SIZE/2));
    return med;
}
int Mode(int A[],int SIZE) //Mode Function Definition
{
    int number = *(A+0);
    int mode = number;
    int count = 1;
    int countMode = 1;

    for (int i=1; i<SIZE; i++)
    {
        if (*(A+i) == number)
        {
            ++count;
        }
        else
        {
            count = 1;
            number = *(A+i);
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
    int SIZE;
    cout<<"Enter the size of array: ";
    cin>>SIZE;
    int A[SIZE]; //Array Declaration
    cout<<"Enter an Array: \n"; //Display message
    input(A,SIZE); //input Function Call
    bubblesort(A,SIZE); //bubblesort Function call
    cout<<"Mean: "<<Mean(A,SIZE)<<endl; //Display mean
    cout<<"Median: "<<Median(A,SIZE)<<endl; //Display median
    cout<<"Mode: "<<Mode(A,SIZE)<<endl; //Display mode
    return 0;
}
