#include <iostream>
#include <math.h>
#define PI 3.14159265
int factorial(int a) //Definition of factorial function
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
float mysin(float deg) //Definition of mysin function
{
    float sum= 0;
    int check=0,sign;
    for(int i=1;i<=15;i++)
    {
        if(i%2!=0)
        {
            check++;
            if(check%2==0)
                sign=-1;
            else
                sign=1;
            float nominator=pow(deg,i);
            int denominator= factorial(i);
            float expression=(nominator*sign)/denominator;
            sum=sum+expression;
        }
    }
    return sum;
}

float mycos(float deg) //Definition of mycos function
{
    float sum=1;
    int check=0,sign;
    for(int i=1;i<=15;i++)
    {
        if(i%2==0)
        {
            check++;
            if(check%2==0)
                sign=1;
            else
                sign=-1;
            float nominator= pow(deg,i);
            int denominator= factorial(i);
            float expression=(nominator/denominator)*sign;
            sum=sum+expression;
        }
    }
    return sum;
}

using namespace std;

int main()
{
    double param,result,result2,result3,result4; //Variable declaration
    cout<<"Enter The Angle in Degrees: "; //Display message
    cin>>param; //Input param
    result= sin(param*PI/180); //Built-in sin function
    result2= mysin(param*PI/180); //mysin function
    result3= cos(param*PI/180); //Built-in cos function
    result4= mycos(param*PI/180); //mycos function
    cout<< "The sine of " << param <<" degree using built-in function is "   << result<<endl;
    cout<<"The sine of "<<param<<" degree using user defined function is "   << result2<<endl;
    cout<< "The cosine of " << param <<" degree using built-in function is "   << result3<<endl;
    cout<<"The cosine of "<<param<<" degree using user defined function is "   << result4;

    return 0;
}
