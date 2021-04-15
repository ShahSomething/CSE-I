#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int Size;
    cout<<"Array Size: ";
    cin>>Size;
    int Array[Size];
    for(int i=0;i<Size;i++)
    {
        *(Array+i)=rand()%100;
        cout<<*(Array+i)<<"  ";
    }
    int Max=*(Array);
    for(int i=0;i<Size;i++)
    {
        if (*(Array+i)>Max)
            Max=*(Array+i);
    }
    cout<<"\nLargest number: "<<Max;
    return 0;
}
