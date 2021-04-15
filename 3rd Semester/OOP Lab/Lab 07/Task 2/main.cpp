#include <iostream>

using namespace std;

class Time
{
private:
    int hours,mins,sec;
public:
    Time(): hours(0),mins(0),sec(0){}
    Time(int h, int m,int s)
    {
        hours=(h>23)?0:h;
        mins=(m>59)?0:m;
        sec=(s>59)?0:s;
    }
    void Show()
    {
        cout<<hours<<" : "<<mins<<" : "<<sec<<endl;
    }
    friend Time operator+(Time ob1, Time ob2);
    friend Time operator++(Time &obj);
    friend Time operator++(Time &obj, int NotUsed);
    friend Time operator--(Time &obj);
    friend Time operator--(Time &obj, int NotUsed);
};

Time operator--(Time &obj, int NotUsed)
{
    Time temp;
    obj.sec--;
    if(obj.sec<0)
    {
        obj.sec+=60;
        obj.mins-=1;
    }
    if(obj.mins<0)
    {
        obj.mins+=60;
        obj.hours-=1;
    }
    return temp;
}

Time operator--(Time &obj)
{
    obj.sec--;
    if(obj.sec<0)
    {
        obj.sec+=60;
        obj.mins-=1;
    }
    if(obj.mins<0)
    {
        obj.mins+=60;
        obj.hours-=1;
    }
    return obj;
}

Time operator++(Time &obj, int NotUsed)
{
    Time temp=obj;
    obj.sec++;
    if(obj.sec>59)
    {
        obj.sec-=60;
        obj.mins+=1;
    }
    if(obj.mins>59)
    {
        obj.mins-=60;
        obj.hours+=1;
    }
    return temp;
}

Time operator++(Time &obj)
{
    obj.sec++;
    if(obj.sec>59)
    {
        obj.sec-=60;
        obj.mins+=1;
    }
    if(obj.mins>59)
    {
        obj.mins-=60;
        obj.hours+=1;
    }
    return obj;
}

Time operator+(Time ob1, Time ob2)
{
    Time temp;
    temp.sec=ob1.sec+ob2.sec;
    temp.mins=ob1.mins+ob2.mins;
    temp.hours=ob1.hours+ob2.hours;
    if(temp.sec>59)
    {
        temp.sec-=60;
        temp.mins+=1;
    }
    if(temp.mins>59)
    {
        temp.mins-=60;
        temp.hours+=1;
    }
    return temp;
}

int main()
{
    Time t1(4,30,50),t2(9,45,30);
    cout<<"Time 1: ";
    t1.Show();
    cout<<"Time 2: ";
    t2.Show();
    Time t3=t1+t2;
    cout<<"Time 3: ";
    t3.Show();
    cout<<"Time 1: ";
    ++t1;
    t1.Show();
    t1++;
    cout<<"Time 1: ";
    t1.Show();
    --t2;
    cout<<"Time 2: ";
    t2.Show();
    t2--;
    cout<<"Time 2: ";
    t2.Show();

    return 0;
}
