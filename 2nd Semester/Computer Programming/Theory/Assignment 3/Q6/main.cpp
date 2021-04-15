#include <iostream>

using namespace std;

int main()
{
    int total=32,bits=0,num;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0)
    {
        int rem=num&1;
        if(rem==1)
            bits++;
        num=num>>1;
    }
    cout<<"This number has "<<total-bits<<" unset bits.";
    return 0;
}
