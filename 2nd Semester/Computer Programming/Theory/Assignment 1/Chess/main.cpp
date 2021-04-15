#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    char col;
    int row;
    cout << "Enter the column: ";
    //Input value of col
    cin>>col;
    cout << "Enter the row: ";
    //Input value of row
    cin>>row;
    //when column entered is a,c,e or g
    if(row<=8 && row>=1 && (col=='a' || col=='c' || col=='e' || col=='g'))
    {
        //Condition for even rows
        if(row%2==0)
            cout<<"This square is White";
        //Odd rows
        else
            cout<<"This square is Black";
    }
    //when column entered is b,d,f or h
    else if(row<=8 && row>=1 && (col=='b' || col=='d' || col=='f' || col=='h'))
    {
        //Condition for even rows
        if(row%2==0)
            cout<<"This square is Black";
        //Odd rows
        else
            cout<<"This square is White";
    }
    //Invalid Position
    else
        cout<<"Invalid Position";
    return 0;
}
