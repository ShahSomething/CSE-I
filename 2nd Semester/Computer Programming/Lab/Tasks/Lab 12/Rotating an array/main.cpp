#include <iostream>

using namespace std;
const int SIZE=6;
void Input(int *A)
{
   for (int i=0;i<SIZE;i++)
        cin>>*(A+i);
}
void Rotate(int *A,char ch,int N)
{
    if (ch=='L'||ch=='l')
    {
        for(int i=0;i<N;i++)
        {
            int temp=*A;
            for(int a=0;a<SIZE-1;a++)
            {
                *(A+a)=*(A+a+1);
            }
            *(A+SIZE-1)=temp;
        }

    }
    else if (ch=='R'||ch=='r')
    {

        for(int i=0;i<N;i++)
        {
            int temp=*(A+SIZE-1);
            for(int a=SIZE-1;a>0;a--)
            {
                *(A+a)=*(A+a-1);
            }
            *A=temp;
        }
    }
    else
        cout<<"Please respond with only L or R \n";
}
void display(int *A)
{
   for (int i=0;i<SIZE;i++)
        cout<<*(A+i);
}
int main()
{
    char ch;
    int N,arr[SIZE];
    cout<<"Please Enter L/l to rotate left or R/r to rotate right: ";
    cin>>ch;
    cout<<"Please Enter the number of times you want to rotate:";
    cin>>N;
    cout<<"Enter the Array: \n";
    Input(arr);
    Rotate(arr,ch,N);
    cout<<"After rotation: ";
    display(arr);
    return 0;
}
