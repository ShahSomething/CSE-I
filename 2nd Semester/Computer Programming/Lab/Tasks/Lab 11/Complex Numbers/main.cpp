#include <iostream>

using namespace std;

struct Complex
{
    int real;
    int imaginary;
};
void input(Complex *a)
{
    cout<<"Enter Real part: ";
    cin>>a->real;
    cout<<"Enter Imaginary part: ";
    cin>>a->imaginary;
}
Complex product(Complex a,Complex b)
{
    Complex prod;
    prod.real=(a.real*b.real)+(a.imaginary*b.imaginary)*(-1);
    prod.imaginary=(a.real*b.imaginary)+(a.imaginary*b.real);
    return prod;
}
Complex sum (Complex a,Complex b)
{
    Complex s;
    s.real=a.real+b.real;
    s.imaginary=a.imaginary+b.imaginary;
    return s;
}
Complex sub(Complex a, Complex b)
{
    Complex s;
    s.real=a.real-b.real;
    s.imaginary=a.imaginary-b.imaginary;
    return s;
}
Complex Div(Complex a, Complex b)
{
    Complex d,nom,temp;
    int denom;
    temp.real=b.real;
    temp.imaginary=(-1)*b.imaginary;
    nom=product(a,temp);
    denom=(a.real*b.real)-(a.imaginary*b.imaginary)*(-1);
    d.real=nom.real/denom;
    d.imaginary=nom.imaginary/denom;
    return d;
}
int main()
{
    Complex a,b,A,S,P,D;
    input(&a);
    input(&b);
    A=sum(a,b);
    S=sub(a,b);
    P=product(a,b);
    D=Div(a,b);
    cout<<"Addition: "<<A.real<<" + "<<A.imaginary<<"i"<<endl;
    cout<<"Subtraction: "<<S.real<<" + "<<S.imaginary<<"i"<<endl;
    cout<<"Product: "<<P.real<<" + "<<P.imaginary<<"i"<<endl;
    cout<<"Division: "<<D.real<<" + "<<D.imaginary<<"i"<<endl;
    return 0;
}
