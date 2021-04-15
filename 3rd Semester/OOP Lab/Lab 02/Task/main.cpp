#include <iostream>

using namespace std;

class Complex
{
private:
    double re,im;
public:
    Complex(){re=0.0,im=0.0;}
    Complex(double a,double b){re=a,im=b;}
    void print()
    {
        cout<<"Complex Number: ("<<re<<","<<im<<")"<<endl;
    }
    Complex operator+(Complex rhs){
        Complex temp;
        temp.re=re + rhs.re;
        temp.im=im + rhs.im;
        return temp;
    }
    Complex operator-(Complex rhs)
    {
        Complex temp;
        temp.re=re-rhs.re;
        temp.im=im-rhs.im;
        return temp;
    }
    void operator++(){
        ++re;
    }
    void operator--(){
        --re;
    }

    Complex operator*(Complex rhs)
    {
        Complex temp;
        temp.re=(re*rhs.re)-(im*rhs.im);
        temp.im=(re*rhs.im)+(im*rhs.re);
        return temp;
    }
};

int main()
{
    Complex c1(2,3),c2(4,3.5),c;
    cout<<"C1: ";
    c1.print();
    cout<<"C2: ";
    c2.print();
    c=c1+c2;
    cout<<"Addition: ";
    c.print();
    c=c1-c2;
    cout<<"Subtraction: ";
    c.print();
    c=c1*c2;
    cout<<"Multiplication: ";
    c.print();
    ++c1;
    cout<<"Increment C1: ";
    c1.print();
    --c2;
    cout<<"Decrement C2: ";
    c2.print();
    return 0;
}
