#include <iostream>
using namespace std;

int main()
{
    int Size;
    cout<<"Enter the size of Array: ";
    cin>>Size;
    int Array[Size];
    cout<<"Enter the Elements of the Array: ";
    for(int i=0;i<Size;i++)
        cin>>Array[i];
    if(Array[0]>=Array[1])
        cout<<"Peak at index 0: "<<Array[0]<<endl;
    for(int i=1;i<Size-1;i++)
    {
        if(Array[i]>=Array[i-1] && Array[i]>=Array[i+1])
            cout<<"Peak at index "<<i<<": "<<Array[i]<<endl;
    }
    if(Array[Size-1]>=Array[Size-2])
        cout<<"Peak at index "<<Size-1<<": "<<Array[Size-1]<<endl;
    return 0;
}
