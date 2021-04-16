#include <iostream>

using namespace std;
const int SIZE=5;

void BubbleSort(int *Array,int Size)
{
    for(int i=0;i<Size;i++)
    {
        for(int j=0;j<Size-1;j++)
        {
            if(Array[j]>Array[i])
            {
                int temp =Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }
}

int BinarySearch(int *Array,int Size,int target)
{
    int m, l, r;
    l = 0; r = Size-1;
    if(target<Array[0]||target>Array[r])
        return -1;
    while (r - l > 1)
    {
        m = (l + r)/2;
        (target <= Array[m] ? r : l) = m;
    }
    return r;
}

int main()
{
    int Array[SIZE],key,index;
    cout<<"Enter the Elements of the Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>Array[i];
    cout<<"Enter the Key you want to Search in the Array: ";
    cin>>key;
    BubbleSort(Array,SIZE);
    index=BinarySearch(Array,SIZE,key);

    cout<<"The key was found at index "<<index;
    return 0;
}
