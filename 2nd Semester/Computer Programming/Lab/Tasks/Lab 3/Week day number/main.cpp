#include <iostream>

using namespace std;

int main()
{
    int A; //Variable declaration
    cout << "Enter the Day number: "; //Display message
    cin>>A; //Input A
    if(A==1) //When A is equal to 1
        cout<<"First Day of a week is Monday"; //Display message
    else if(A==2) //When A is equal to 2
        cout<<"Second Day of a week is Tuesday"; //Display message
    else if(A==3) //When A is equal to 3
        cout<<"Third Day of a week is Wednesday"; //Display message
    else if(A==4) //When A is equal to 4
        cout<<"Forth Day of a week is Thursday"; //Display message
    else if(A==5) //When A is equal to 5
        cout<<"Fifth Day of a week is Friday"; //Display message
    else if(A==6) //When A is equal to 6
        cout<<"Sixth Day of a week is Saturday"; //Display message
    else if(A==7) //When A is equal to 7
        cout<<"Seventh Day of a week is Sunday"; //Display message
    else
        cout<<"Invalid Day number entered!!!"; //Display message
    return 0;
}
