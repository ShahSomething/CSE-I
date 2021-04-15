#include <iostream>

using namespace std;

int main()
{
    float Y=1; //Variable declaration
    for(int i=1;i<=10;i++)//Loop
    {
        if(i%2==1)
        {
            float Factorial=1;
            //factorial
            for(int f=1;f<=i;f++)
            {
                Factorial= Factorial*f;
            }
            //Square
            float sq=i*i;
            Y=Y+(sq/Factorial);
        }
    }
    cout<<"The answer is: "<<Y;
    return 0;
}
