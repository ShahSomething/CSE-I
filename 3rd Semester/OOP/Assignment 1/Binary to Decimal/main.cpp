#include <iostream>
#include <cmath>
using namespace std;

class Binary
{
private:
    int bin;
public:
    Binary(){bin=0;}
    void input(){cin>>bin;}
    int Get_B(){return bin;}
    int BinaryToDecimal()
    {
        int p=0,test=bin,sum=0;
        while(test)
        {
            int rem=test%10;
            sum+=(rem*pow(2,p));
            p++;
            test/=10;
        }
        return sum;
    }

};

int main()
{
    Binary B;
    cout<<"Enter a Binary Number: ";
    B.input();
    cout<<"Decimal Equivalent of Binary "<<B.Get_B()<<" is: "<<B.BinaryToDecimal();
    return 0;
}
