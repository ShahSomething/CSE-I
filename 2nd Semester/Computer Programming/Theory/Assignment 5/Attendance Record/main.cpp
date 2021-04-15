#include <iostream>

using namespace std;
void input(int A[3][10]) //Definition of input Function
{
    for(int r=0;r<3;r++) //Loop for rows
    {
        for(int c=0;c<10;c++) //Loop for columns
        {
            cin>>*(*(A+r)+c); //Array Entry
        }
    }
}
void Average(int A[3][10]) //Definition of Average function
{
    float sum[10]={0},Avg[10];
    for(int c=0;c<10;c++) //Loop for columns
    {
        for(int r=0;r<3;r++) //Loop for rows
        {
            *(sum+c)+=*(*(A+r)+c); //SUM
        }
    }
    for(int i=0;i<10;i++)
    {
        *(Avg+i)=*(sum+i)/3.0; //Average
    }
    for(int i=0;i<10;i++)
    {
        if(*(Avg+i)>=75)
            cout<<"Student "<<i+1<<" is eligible for writing final exam.\n";
        else if(*(Avg+i)>=65)
            cout<<"Student "<<i+1<<" is in condonation list.\n";
        else
            cout<<"Student "<<i+1<<" is not eligible for writing final exam.\n";
    }
}
int main()
{
    int A[3][10]; //Array Declaration
    cout<<"Enter the Attendance record of Students: \n"; //Display message
    input(A); //Function call
    Average(A); //Function call
    return 0;
}
