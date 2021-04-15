#include <iostream>

using namespace std;

struct time
{
    int hours;
    int mins;
    int sec;
}t1,t2;
void input(time *t)
{
    cout<<"Hours: ";
    cin>>t->hours;
    cout<<"Mins: ";
    cin>>t->mins;
    cout<<"Seconds: ";
    cin>>t->sec;
}
time add(time t1,time t2)
{
    time sum;
    sum.sec=t1.sec+t2.sec;
    sum.mins=t1.mins+t2.mins;
    sum.hours=t1.hours+t2.hours;
    if(sum.sec>=60)
       {
         sum.mins++;
         sum.sec-=60;
       }
    if(sum.mins>=60)
        {
            sum.hours++;
            sum.mins-=60;
        }
    if (sum.hours>=24)
        sum.hours-=24;
    return sum;
}
time subtract(time t1,time t2)
{
    time s;
    s.sec=t1.sec-t2.sec;
    s.mins=t1.mins-t2.mins;
    s.hours=t1.hours-t2.hours;
    if(s.sec<0)
       {
         s.mins--;
         s.sec+=60;
       }
    if(s.mins<0)
        {
            s.hours--;
            s.mins+=60;
        }
    if (s.hours<0)
        s.hours+=24;
    return s;
}
void display(time a)
{
    cout<<a.hours<<" : "<<a.mins<<" : "<<a.sec;
}
int main()
{
    input(&t1);
    input(&t2);
    time s=add(t1,t2);
    cout<<"Sum = ";
    display(s);
    s=subtract(t1,t2);
    cout<<"\nSubtraction = ";
    display(s);
    return 0;
}
