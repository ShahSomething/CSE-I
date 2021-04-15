#include <iostream>

using namespace std;

class Distance
{
public:
    int feet;
    int inch;
}d1,d2;
void input(Distance *d)
{
    cout<<"Feet: ";
    cin>>d->feet;
    cout<<"Inch: ";
    cin>>d->inch;
}
Distance add(Distance a,Distance b)
{
    Distance s;
    s.inch=a.inch+b.inch;
    s.feet=a.feet+b.feet;
    if(s.inch>=12)
    {
        s.feet++;
        s.inch-=12;
    }
    return s;
}
Distance sub(Distance a,Distance b)
{
    Distance c;
    c.inch=a.inch-b.inch;
    c.feet=a.feet-b.feet;
    if(c.inch<0)
    {
        c.feet--;
        c.inch+=12;
    }
    return c;
}
void display(Distance a)
{
    cout<<a.feet<<" Feet "<<a.inch<<" in.";
}
int main()
{
    input(&d1);
    input(&d2);
    Distance s=add(d1,d2);
    cout<<"Addition = ";
    display(s);
    s=sub(d1,d2);
    cout<<"\nSubtraction = ";
    display(s);
    return 0;
}
