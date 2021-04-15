#include <iostream>

using namespace std;
struct Date
{
    int year;
    int month;
    int day;
}d1,d2;

void input(Date *d)
{
    cout<<"Enter Year: ";
    cin>>d->year;
    cout<<"Enter Month: ";
    cin>>d->month;
    cout<<"Enter Day: ";
    cin>>d->day;
}
Date add(Date d1, Date d2)
{
    Date s;
    s.day=d1.day+d2.day;
    s.month=d1.month+d2.month;
    s.year=d1.year+d2.year;
    if(s.day>30)
    {
        s.month++;
        s.day-=30;
    }
    if(s.month>12)
    {
        s.year++;
        s.month-=12;
    }
    return s;
}
Date sub(Date d1, Date d2)
{
    Date c;
    c.day=d1.day-d2.day;
    c.month=d1.month-d2.month;
    c.year=d1.year-d2.year;
    if(c.day<1)
    {
        c.month--;
        c.day+=30;
    }
    if(c.month<1)
    {
        c.year--;
        c.month+=12;
    }
    return c;
}
void display(Date d)
{
    cout<<"The new date is: \n";
    cout<<d.year<<" : "<<d.month<<" : "<<d.day;
}
int main()
{
    cout<<"Enter the first date\n";
    input(&d1);
    cout<<"Enter the second date\n";
    input(&d2);
    Date A=add(d1,d2);
    Date S=sub(d1,d2);
    cout<<"After Addition: \n";
    display(A);
    cout<<"\nAfter Subtraction: \n";
    display(S);
    return 0;
}
