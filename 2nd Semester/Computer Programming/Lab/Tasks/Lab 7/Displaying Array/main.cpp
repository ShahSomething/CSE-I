#include <iostream>

using namespace std;

int main()
{
    int A[12];
    for(int i=0;i<12;i++) //Input Array
    {
        cout<<"Enter number "<<i+1<<":  ";
        cin>>A[i];
    }
    int counter=0;
    for(int i=0;i<12;i++) //Display Array
    {
        cout<<"Value "<<i+1<<" = "<<A[i]<<"\t";
        counter++;
        if(counter==3)
        {
            cout<<endl;
            counter=0;
        }
    }
    return 0;
}
