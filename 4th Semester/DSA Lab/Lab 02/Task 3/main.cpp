#include <iostream>

using namespace std;

void InsertionSort(int Array[],int SIZE)
{
    int i,j,temp;
    int check=0;
    for(i=1;i<SIZE;i++)
    {
        for(j=i;j>0 && Array[j]<Array[j-1];j--)
        {
            temp=Array[j];
            Array[j]=Array[j-1];
            Array[j-1]=temp;
            check++;
        }
        if (check==0 && i!=1)
            break;
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
