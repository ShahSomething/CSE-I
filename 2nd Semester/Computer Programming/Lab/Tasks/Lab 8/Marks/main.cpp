#include <iostream>

using namespace std;

int main()
{
    const int SIZE=5;
    int Marks[SIZE],pass=0,fail=0;
    float Avg,sum=0;
    cout<<"Enter an Array: \n";
    for(int i=0;i<SIZE;i++) //Input string
    {
        cin>>Marks[i];
    }
    int Min=Marks[0],Max=Marks[0];
    for (int i=0;i<SIZE;i++) //Min Max
    {
        if(Marks[i]>Max)
            Max=Marks[i];
        if (Marks[i]<Min)
            Min=Marks[i];
    }
    for (int i=0;i<SIZE;i++) //Pass Fail
    {
        if(Marks[i]>=50)
            pass++;
        else
            fail++;
    }
    for (int i=0;i<SIZE;i++) //sum
    {
        sum=sum+Marks[i];
    }
    Avg=sum/SIZE;
    cout<<"Min: "<<Min;
    cout<<"\nMax: "<<Max;
    cout<<"\nPass: "<<pass;
    cout<<"\nFail: "<<fail;
    cout<<"\n Average: "<<Avg;
    return 0;
}
