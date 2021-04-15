#include <iostream>

using namespace std;

int main()
{
    const int SIZE=10;
    int A[SIZE];
    float sum=0.0;
    for(int i=0;i<SIZE;i++) //Input Array
    {
        cout<<"Enter a number:";
        cin>>A[i];
    }
    for(int i=0;i<SIZE;i++) //Calculating sum
    {
        sum+=A[i];
    }
    float Avg=sum/SIZE;
    cout<<"Average= "<<Avg; //Display Average
    return 0;
}
