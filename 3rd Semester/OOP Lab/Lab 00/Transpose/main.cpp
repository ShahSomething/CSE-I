#include <iostream>

using namespace std;

int main()
{
    int cols,rows;
    cout<<"Matrix Length: ";
    cin>>rows>>cols;
    int Array[rows][cols];
    cout<<"Matrix Content: ";
    for(int r=0;r<rows;r++)
    {
        for (int c=0;c<cols;c++)
            cin>>*(*(Array+r)+c);
    }
    for(int c=0;c<cols;c++)
    {
        for(int r=0;r<rows;r++)
            cout<<*(*(Array+r)+c);
        cout<<"\n";
    }
    return 0;
}
