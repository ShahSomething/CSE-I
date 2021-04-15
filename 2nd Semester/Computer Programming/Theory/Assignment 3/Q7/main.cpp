#include <iostream>

using namespace std;

int main()
{
    float Y=0;
    for(int i=1;i<=10;i++)
    {
        if (i%3!=0)
        {
            float sq=i*i;
            float fact=1;
            for(int a=1;a<=i;a++)
            {
                fact=fact*a;
            }
            float exp=sq/fact;
            Y=Y+exp;
        }
    }
    cout<<Y;
    return 0;
}
