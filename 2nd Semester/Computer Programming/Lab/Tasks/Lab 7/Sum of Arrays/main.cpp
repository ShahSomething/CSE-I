#include <iostream>

using namespace std;

int main()
{
    const int SIZE=4;
    int A1[SIZE],A2[SIZE],A3[SIZE];
    cout<<"Enter Array "<<1<<":\n";
    for(int i=0;i<SIZE;i++) //Input Array 1
    {
        cout<<"Enter a Number: ";
        cin>>A1[i];
    }
    cout<<"Enter Array "<<2<<":\n";
    for(int i=0;i<SIZE;i++) //Input Array 2
    {
        cout<<"Enter a Number: ";
        cin>>A2[i];
    }
    for(int i=0;i<SIZE;i++) //Finding sum
    {
        A3[i]=A1[i]+A2[i];
    }
    cout<<"Sum of A1 and A2 = ";
    for(int i=0;i<SIZE;i++) //Display sum
        cout<<A3[i]<<"  ";
    return 0;
}
