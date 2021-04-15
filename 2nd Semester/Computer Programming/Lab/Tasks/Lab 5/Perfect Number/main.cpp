#include <iostream>

using namespace std;
void divisors(int a) //Definition of divisors function
{
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<i<<"  ";
        }
    }
}
bool Perfect(int a) //Definition of Perfect function
{
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if (a%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==a)
        {
            return 1;
        }
    else
        return 0;
}

int main()
{
    int counter=0;
    for(int i=1;i>=0;i++)
    {
        int test=Perfect(i);
        if (test==1)
        {
            counter++;
            cout<<i<<" is a Perfect Number\n";
            cout<<"Its Divisors are: ";
            divisors(i);
            cout<<endl;
        }
        if(counter==4)
            return 0;
    }
    return 0;

}
