#include <iostream>

using namespace std;
void Grade(int a) //Defining Grade Function
{
    switch(a)
    {
    case 91 ...100:
        cout<<"Grade= A";
        break;
    case 81 ...90:
        cout<<"Grade= B";
        break;
    case 71 ...80:
        cout<<"Grade= C";
        break;
    case 61 ...70:
        cout<<"Grade= D";
        break;
    case 0 ...60:
        cout<<"Grade= F";
        break;
    default:
        cout<<"Invalid Entry";
    }
}

int main()
{
    int marks; //Variable declaration
    cout<<"Enter Marks: "; //Display message
    cin>>marks;//Input marks
    Grade(marks); //Calling the Grade function
    return 0;
}
