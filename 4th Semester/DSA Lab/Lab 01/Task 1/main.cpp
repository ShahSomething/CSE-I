#include <iostream>

using namespace std;
double Avg(float *ptr, int s)
{
    double avg=0;
    double sum=0;
    for(int i=0;i<s;i++)
        sum+=*(ptr+i);
    avg=sum/s;
    return avg;
}

int main()
{
    int SIZE;
    float *Array;
    cout<<"Enter the length of the Array: ";
    cin>>SIZE;
    Array = new float[SIZE];
    cout<<"Enter the Elements of the Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>*(Array+i);
    double res= Avg(Array,SIZE);
    cout<<"Average of the Array: "<<res;
    delete[] Array;

    return 0;
}
