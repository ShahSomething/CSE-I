#include <iostream>

using namespace std;

void SelectionSort(int Array[], int SIZE)
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(Array[i]>Array[j])
            {
                int temp= Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
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
    SelectionSort(Array,SIZE);
    cout<<"Sorted Array: ";
    for(int i=0;i<SIZE;i++)
        cout<<Array[i]<<"  ";
    return 0;
}
