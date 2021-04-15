#include <iostream>

using namespace std;

class Distance
{
private:
    int feet,inch;
public:
    Distance();
    Distance(int f,int i);
    void ShowDistance();
    Distance operator+(Distance obj);
    Distance operator+=(Distance obj);
    bool operator>(Distance obj);
    bool operator>=(Distance obj);
    bool operator<(Distance obj);
    bool operator<=(Distance obj);
    bool operator==(Distance obj);
    bool operator!=(Distance obj);
    Distance operator++();
    Distance operator++(int NotUsed);
    Distance operator--();
    Distance operator--(int NotUsed);



};
Distance::Distance(): feet(0),inch(0){}
Distance::Distance(int f, int i): feet(f),inch(i)
{
    if (inch>12)
    {
        feet++;
        inch-=12;
    }
}
void Distance::ShowDistance()
{
    cout<<"Distance: "<<feet<<" feet "<<inch<<" inch(es).\n";
}
Distance Distance::operator+(Distance obj)
{
    Distance temp;
    temp.inch=inch+obj.inch;
    temp.feet=feet+obj.feet;
    if (temp.inch>12)
    {
        temp.feet++;
        temp.inch-=12;
    }
    return temp;
}
Distance Distance::operator+=(Distance obj)
{
    inch+=obj.inch;
    feet+=obj.feet;
    if (inch>12)
    {
        feet++;
        inch-=12;
    }
    return *this;
}
bool Distance::operator>(Distance obj)
{
    if (feet>obj.feet)
        return true;
    else if(feet==obj.feet && inch>obj.inch)
        return true;
    else
        return false;
}
bool Distance::operator<(Distance obj)
{
    if (feet<obj.feet)
        return true;
    else if(feet==obj.feet && inch<obj.inch)
        return true;
    else
        return false;
}
bool Distance::operator>=(Distance obj)
{
    if (feet>obj.feet || (feet==obj.feet && inch==obj.inch))
        return true;
    else if(feet==obj.feet && inch>obj.inch)
        return true;
    else
        return false;
}
bool Distance::operator<=(Distance obj)
{
    if (feet<obj.feet || (feet==obj.feet && inch==obj.inch))
        return true;
    else if(feet==obj.feet && inch<obj.inch)
        return true;
    else
        return false;
}
bool Distance::operator==(Distance obj)
{
    if (feet==obj.feet && inch==obj.inch)
        return true;
    else
        return false;
}
bool Distance::operator!=(Distance obj)
{
    if (feet!=obj.feet || inch!=obj.inch)
        return true;
    else
        return false;
}
Distance Distance::operator++()
{
    inch++;
    if (inch>12)
    {
        feet++;
        inch-=12;
    }
    return *this;
}
Distance Distance::operator++(int NotUsed)
{
    Distance temp= *this;
    inch++;
    if (inch>12)
    {
        feet++;
        inch-=12;
    }
    return temp;
}
Distance Distance::operator--()
{
    inch--;
    if (inch<0)
    {
        feet--;
        inch+=12;
    }
    return *this;
}
Distance Distance::operator--(int NotUsed)
{
    Distance temp= *this;
    inch--;
    if (inch<0)
    {
        feet--;
        inch+=12;
    }
    return temp;
}

int main()
{
    Distance d1(3,12),d2(12,0);
    cout<<"For D1: \n";
    d1.ShowDistance();
    cout<<"For D2: \n";
    d2.ShowDistance();
    Distance d3=d1+d2;
    cout<<"For D3: \n";
    d3.ShowDistance();
    d3+=d1;
    cout<<"For D3: \n";
    d3.ShowDistance();
    if (d1>d2)
        cout<<"D1 is greater than D2.\n";
    if (d1<d2)
        cout<<"D1 is less than D2.\n";
    if (d1>=d2)
        cout<<"D1 is greater than or equal to D2.\n";
    if (d1<=d2)
        cout<<"D1 is less than or equal to D2.\n";
    if (d1==d2)
        cout<<"D1 is equal to D2.\n";
    if (d1!=d2)
        cout<<"D1 is not equal to D2.\n";
    ++d2;
    cout<<"After incrementing D2:\n";
    d2.ShowDistance();
    d1--;
    cout<<"After Decrementing D1: \n";
    d1.ShowDistance();
    return 0;
}
