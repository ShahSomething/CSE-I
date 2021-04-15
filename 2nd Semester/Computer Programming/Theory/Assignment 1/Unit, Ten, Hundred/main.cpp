#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int N,U,T,H;
    cout << "Enter a 3-digit Number: ";
    //Input value of N
    cin>>N;
    //White spacing
    cout<<"\n";
    //Formula for Unit's Place
    U=N%10;
    //Formula for Ten's Place
    T=(N%100)/10;
    //Formula for Hundred's Place
    H=N/100;
    //Display unit's Place
    cout<<"Unit's place: "<<U<<endl;
    //Display Ten's Place
    cout<<"Ten's place: "<<T<<endl;
    //Display Hundred's Place
    cout<<"Hundred's place: "<<H<<endl<<endl;
    //Varification of  U+T*10+H*100=N
    cout<<"U + T*10 + H*100 = "<<U+T*10+H*100;
    return 0;
}
