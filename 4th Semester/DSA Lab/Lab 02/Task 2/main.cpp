#include <iostream>

using namespace std;

void BubbleSort(int Array[],int SIZE)
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE-1;j++)
        {
            if(Array[j]>Array[j+1])
            {
                int temp=Array[j];
                Array[j]=Array[j+1];
                Array[j+1]=temp;
            }
        }
    }
}

int main()
{
    int SIZE;
    cout<<"Enter the Size of the Array: ";
    cin>>SIZE;
    int Array[SIZE];
    cout<<"Enter the Elements of the Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>Array[i];
    BubbleSort(Array,SIZE);
    cout<<"Sorted Array: ";
    for(int i=0;i<SIZE;i++)
        cout<<Array[i]<<"  ";
    return 0;
}
