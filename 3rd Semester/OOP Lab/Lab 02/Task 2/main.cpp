#include <iostream>
using namespace std;
class Complex
{
private:
    double re,im;
public:
    Complex(){re=0.0,im=0.0;}
    Complex(double a,double b){re=a,im=b;}
    void display()
    {
        cout<<"Complex Number: "<<re<<"+i"<<im<<endl;
    }
    Complex sumcom(Complex c1)
    {
        Complex c;
        c.re=c1.re+re;
        c.im=c1.im+im;
        return c;
    }
    Complex negcom()
    {
        Complex temp;
        temp.re=-re;
        temp.im=-im;
        return temp;
    }
    void input()
    {
        cin>>re;
        cin>>im;
    }
    Complex subcom(Complex c1)
    {
        Complex c;
        c.re=c1.re-re;
        c.im=c1.im-im;
        return c;
    }
    Complex mul(Complex c1)
    {
        Complex c;
        c.re=(c1.re*re)-(c1.im*im);
        c.im=(c1.re*im)+(c1.im*re);
        return c;
    }
};

int main()
{
    Complex c1(2,3),c2(4,3.5),c;
    c2=c.sumcom(c1);
    c1.display();
    c2.display();
    c.display();
    c=c1.negcom();
    c.display();
    c1.input();
    cout<<"Subtraction: ";
    c2=c.subcom(c1);
    c2.display();
    cout<<"Multiplication: ";
    c2=c.mul(c1);
    c2.display();
    return 0;
}
