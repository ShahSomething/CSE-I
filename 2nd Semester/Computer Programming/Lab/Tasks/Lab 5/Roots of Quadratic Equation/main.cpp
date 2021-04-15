#include <iostream>
#include <math.h>

using namespace std;

float roots(float a, float b, float c, float &r1, float &r2) //Definition of roots function
{
    float d=(b*b)-(4*a*c);
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2 = -(b + sqrt(d)) / (2*a);
    }
    else if(d==0)
    {
        r1 = -(b) / (2*a);
        r2=r1;
    }
    else
    {
        r1= -b /(2 * a);
        r2=sqrt(-d) / (2*a);
    }
}
int main()
{
    float a,b,c,r1,r2; //Variable declaration
    cout << "Enter a: " ; //Display message
    cin>>a; //Input a
    cout << "Enter b: " ; //Display message
    cin>>b; //Input b
    cout << "Enter c: " ; //Display message
    cin>>c; //Input c
    roots(a,b,c,r1,r2);
    cout<<"Roots:\n"; //Display message
    cout<<"R1 = "<<r1; //Display root1
    cout<<"\nR2 = "<<r2; //Display root2
    return 0;
}
