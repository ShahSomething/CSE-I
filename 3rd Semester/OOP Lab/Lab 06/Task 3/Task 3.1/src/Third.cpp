#include "Third.h"
#include<iostream>
using namespace std;
void Third::t_input()
{
    s_input();
    cout<<"Enter t: ";
    cin>>t;
}
void Third::Max()
{
    if(f>s && f>t)
        cout<<"Max: "<<f<<endl;
    else if (s>f && s>t)
        cout<<"Max: "<<s<<endl;
    else if (t>f && t>s)
        cout<<"Max: "<<t<<endl;
}
void Third::Show()
{
    cout<<"f: "<<f<<endl;
    cout<<"s: "<<s<<endl;
    cout<<"t: "<<t<<endl;
}
