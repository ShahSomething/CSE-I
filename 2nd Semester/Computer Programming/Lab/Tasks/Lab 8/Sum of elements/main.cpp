#include <iostream>

using namespace std;

int main()
{
    const int SIZE=5;
    int A1[SIZE],A2[SIZE],sum1=0,sum2=0;
    cout<<"Enter A1:";
    for(int i=0;i<SIZE;i++) //Input A1
    {
        cin>>A1[i];
    }
    cout<<"Enter A2:";
    for(int i=0;i<SIZE;i++) //Input A2
    {
        cin>>A2[i];
    }
    for(int i=0;i<SIZE;i++) //Finding sums
    {
        sum1+=A1[i];
        sum2+=A2[i];
    }
    cout<<"Sum1= "<<sum1;
    cout<<"\nSum2= "<<sum2<<endl;
    if(sum1>sum2)
        cout<<"A1 has higher sum";
    else if(sum1<sum2)
        cout<<"A2 has higher sum";
    else
        cout<<"A1 and A2 have equal sums";
    return 0;
}
