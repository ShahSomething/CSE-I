#include <iostream>

using namespace std;

class First
{
protected:
    int f;
public:
    void f_input()
    {
        cout<<"Enter f: ";
        cin>>f;
    }
};

class Second: public First
{
protected:
    int s;
public:
    void s_input()
    {
        f_input();
        cout<<"Enter s: ";
        cin>>s;
    }
};

class Third: public Second
{
protected:
    int t;
public:
    void t_input()
    {
        s_input();
        cout<<"Enter t: ";
        cin>>t;
    }
    void Max()
    {
        if(f>s && f>t)
            cout<<"Max: "<<f<<endl;
        else if (s>f && s>t)
            cout<<"Max: "<<s<<endl;
        else if (t>f && t>s)
            cout<<"Max: "<<t<<endl;
    }
    void Show()
    {
        cout<<"f: "<<f<<endl;
        cout<<"s: "<<s<<endl;
        cout<<"t: "<<t<<endl;
    }

};

int main()
{
    Third t1;
    t1.t_input();
    t1.Show();
    t1.Max();
    return 0;
}
