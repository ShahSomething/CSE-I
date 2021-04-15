#include <iostream>

using namespace std;

int main()
{
    const int SIZE=4;
    int A[SIZE],key,counter=0;
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0;i<SIZE;i++) //Input Array
    {
        cout<<"Enter a Number: ";
        cin>>A[i];
    }
    int i=0;
    while (i<SIZE) //Finding index number
    {
        if (key==A[i])
            {
                cout<<"Key found in index "<<i<<endl;
                counter++;
            }
        i++;
    }

    if(counter==0)
        cout<<"Key not present in Array";
    return 0;
}
