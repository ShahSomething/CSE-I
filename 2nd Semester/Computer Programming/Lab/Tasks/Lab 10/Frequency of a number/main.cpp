#include <iostream>

using namespace std;
void input(int A[],int SIZE) //input Function Definition
{
    for (int i=0;i<SIZE;i++)
    {
        cin>>*(A+i);
    }
}
int frequency(int A[],int SIZE,int num) //frequency Function Definition
{
    int counter=0;
    for(int i=0;i<SIZE;i++)
    {
        if(*(A+i)==num)
            counter++;
    }
    return counter;
}
int main()
{
    int SIZE; //Variable declaration
    cout<<"Enter the size of Array: "; //Display message
    cin>>SIZE; //Input SIZE
    int A[SIZE],num;
    cout<<"Input an Array: \n"; //Display message
    input(A,SIZE); //input Function Call
    cout<<"Key number: "; //Display message
    cin>>num; //Input num
    int counter=frequency(A,SIZE,num); //frequency Function Call
    cout<<"Frequency of "<<num<<" in this Array is: "<<counter;
    return 0;
}
