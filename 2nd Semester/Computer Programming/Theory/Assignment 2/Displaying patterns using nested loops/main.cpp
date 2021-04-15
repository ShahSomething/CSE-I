#include <iostream>

using namespace std;

int main()
{
    //PART A
    int a=6;
    for(int i=5;i>=1;i--)
    {
        a--;
        for(;1<=i;i--)
            cout<<"*";
        cout<<endl;
        i=a;
    }
    cout<<"\n";
    //PART B
    a=0;
    for(int i=1;i<=5;i++)
    {
        a++;
        for(;i>=1;i--)
            cout<<"*";
        cout<<endl;
        i=a;
    }
    //PART C
    int asterisks=1,spaces;
    for(int i=5;i>=1;i--)
    {
        a=asterisks+2;
        spaces=i-1;
        for(;spaces>=1;spaces--)
            cout<<" ";
        for(;asterisks>=1;asterisks--)
            cout<<"*";
        cout<<endl;
        asterisks=a;
    }
    return 0;
}
