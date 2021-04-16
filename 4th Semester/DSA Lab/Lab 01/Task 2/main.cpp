#include <iostream>

using namespace std;

int maxValue(int arr[],int SIZE)
{
    int temp = arr[0];
    for(int i=1;i<SIZE;i++)
    {
        if(arr[i]>temp)
            temp = arr[i];
    }
    return temp;
}

int main()
{
    int SIZE;
    cout<<"Enter the Size of Array: ";
    cin>>SIZE;
    int Array[SIZE];
    cout<<"Enter the Elements of Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>Array[i];
    int res = maxValue(Array,SIZE);
    cout<<"Max element of the Array is: "<<res;
    return 0;
}
