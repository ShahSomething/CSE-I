#include <iostream>

using namespace std;

bool Prime(int a) //Definition of Prime function
{
    int counter=0;
    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            counter++;
        }
    }
    if(counter>1)
    {
        return 0;
    }
    return 1;

}
int main()
{
    cout<<"Prime Number between 2 to 1000:\n"; //Display message
    for(int i=2;i<=1000;i++ ) //Loop repetition from 2 to 1000
    {
        int test=Prime(i); //Calling the Prime function
        if(test==1)
            cout<<i<<"  "; //Display message
    }
    return 0;
}
