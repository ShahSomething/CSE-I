#include <iostream>

using namespace std;

int main()
{
    //PART A
    int i=1,b=1;
    while(i<=5)
    {
        b++;
        int a=1;
        while(i>=1)
        {
            cout<<a*a<<"   ";
            a++;
            i--;
        }
        cout<<endl;
        i=b;
    }
    cout<<"\n\n";
    //PART B
    i=5,b=5;
    int c=0;
    while(i>=1)
    {
        b--;
        c++;
        int a=c,d=5;
        while(i>=1)
        {
            cout<<a<<"   ";
            a=a+d;
            d--;
            i--;
        }
        cout<<endl;
        i=b;
    }
    return 0;
}
