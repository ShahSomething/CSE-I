#include <iostream>

using namespace std;

void min_max(int a,int b,int c,int d) //Definition of min_max function
{
    if(a>b && a>c && a>d)
        cout<<"Max: "<<a<<endl;
    else if(b>a && b>c && b>d)
        cout<<"Max: "<<b<<endl;
    else if(c>a && c>b && c>d)
        cout<<"Max: "<<c<<endl;
    else
        cout<<"Max: "<<d<<endl;
    if(a<b && a<c && a<d)
        cout<<"Min: "<<a<<endl;
    else if(b<a && b<c && b<d)
        cout<<"Min: "<<b<<endl;
    else if(c<a && c<b && c<d)
        cout<<"Min: "<<c<<endl;
    else
        cout<<"Min: "<<d<<endl;
}

int main()
{
    int a,b,c,d; //Variable declaration
    cout << "Enter a:"; //Display message
    cin>>a; //Input a
    cout << "Enter b:"; //Display message
    cin>>b; //Input a
    cout << "Enter c:"; //Display message
    cin>>c; //Input a
    cout << "Enter d:"; //Display message
    cin>>d; //Input a
    min_max(a,b,c,d); //Calling min_max function
    return 0;
}
