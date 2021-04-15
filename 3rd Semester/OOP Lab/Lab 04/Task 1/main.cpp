#include <iostream>
#include<string>
#include<cstring>

using namespace std;


class complex
{
private:
    double re, im;
public:
    complex(){re=0,im=0;}
    complex(double a,double b){re=a,im=b;}
    complex(const complex &obj)
    {
        cout<<"Inside custom copy constructor.\n";
        re=obj.re+5;
        im=obj.im+5;
    }
    void show(){
        cout<<"Address of obj: "<<this<<endl;
        cout<<"Complex Number: "<<re<<"+i"<<im<<endl;
    }
};

int main()
{
    complex c1(3,4);
    c1.show();
    complex c2(c1);
    c2.show();
    complex c3=c2;
    c3.show();
    return 0;
}
