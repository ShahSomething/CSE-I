#include <iostream>
#include<cmath>
const int SIZE=5;
using namespace std;

class Array
{
private:
    int A[SIZE];
public:
    void input()
    {
       for(int i=0;i<SIZE;i++)
            cin>>A[i];
    }
    void Bubblesort()
    {
        for(int i=0;i<SIZE;i++)
        {
            for(int a=0;a<SIZE-1;a++)
            {
                if(A[a]>A[a+1])
                {
                    int temp=A[a];
                    A[a]=A[a+1];
                    A[a+1]=temp;
                }
            }
        }
    }
    double Mean()
    {
        double mean;
        int half=SIZE/2;
        if(SIZE%2)
        {
            mean=A[half];
        }
        else
        {
            mean=(A[half]+A[half-1])/2;
        }
        return mean;
    }
    double Deviation()
    {
        double mean= this->Mean();
        double dev,sum=0;
        for(int i=0;i<SIZE;i++)
        {
            sum+=pow((A[i]-mean),2);
        }
        dev=sqrt(sum)/(SIZE-1);
        return dev;
    }
};

int main()
{
    Array A;
    cout<<"Enter Array:\n";
    A.input();
    A.Bubblesort();
    cout<<"Mean = "<<A.Mean()<<endl;
    cout<<"Standard Deviation = "<<A.Deviation();
    return 0;
}
