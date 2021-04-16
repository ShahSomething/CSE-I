#include <iostream>

using namespace std;
const int SIZE=10;

int LinearSearch(int *Array,int Size, int target)
{
    for(int i=0;i<Size;i++)
    {
        if(*(Array+i)==target)
            return i;
    }
    return -1;
}

int main()
{
    int Array[SIZE],key,index;
    cout<<"Enter the Elements of the Array: ";
    for(int i=0;i<SIZE;i++)
        cin>>Array[i];
    cout<<"Enter the Key you want to Search in the Array: ";
    cin>>key;
    index=LinearSearch(Array,SIZE,key);

    cout<<"The key was found at index "<<index;
    return 0;
}
