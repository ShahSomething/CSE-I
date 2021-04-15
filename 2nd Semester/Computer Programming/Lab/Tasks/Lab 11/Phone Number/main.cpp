#include <iostream>

using namespace std;

struct Phone
{
    int area;
    int exchange;
    int number;
};
void input(Phone *p)
{
    cout<<"Area No.: ";
    cin>>p->area;
    cout<<"Exchange: ";
    cin>>p->exchange;
    cout<<"Number: ";
    cin>>p->number;
}
void display (Phone p)
{
    cout<<"(0"<<p.area<<")"<<" "<<p.exchange<<"-"<<p.number<<endl;
}
int main()
{
    Phone p1={313,090,3318},p2;
    input(&p2);
    cout<<"My number is: ";
    display(p1);
    cout<<"Your number is: ";
    display(p2);
    return 0;
}
