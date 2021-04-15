#include <iostream>

using namespace std;
const int SIZE=5;
void input (int *A)
{
    for (int i=0;i<SIZE;i++)
        cin>>*(A+i);
}
void repitition(int A[])
{
    for (int i=0;i<SIZE;i++)
    {
        int counter=0;
        for(int a=0;a<SIZE;a++)
        {
            if(A[i]==A[a])
                counter++;
        }
        if(counter==1)
            cout<<A[i]<<endl;
    }
}
int main()
{
    int arr[SIZE];
    cout<<"Enter the Array: \n";
    input(arr);
    cout<<"Numbers that appear only one time in Array: \n";
    repitition(arr);
    return 0;
}
