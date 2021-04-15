#include <iostream>

using namespace std;

class A
{
private:
    int a;
protected:
    int b;
public:
    int c;
    A(){a=1,b=2,c=3;}
    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

class B: public A
{
private:
    int d;
public:
    B(){d=4;}
    void showB(){
        //cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
    }
};

int main()
{
    B objb;
    objb.showB();
    return 0;
}
