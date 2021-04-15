#include <iostream>
#include<string>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
    void reduce();
public:
    Fraction(){numerator=0,denominator=0;}
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
    Fraction plus(Fraction that);
    Fraction minus(Fraction that);
    Fraction times(Fraction that);
    Fraction by(Fraction that);
    bool isGreaterThan(Fraction that);
    bool isLessThan(Fraction that);
    bool isEqual(Fraction that);
};

bool Fraction::isGreaterThan(Fraction that)
{
    if((float(this->numerator)/float(this->denominator))>(float(that.numerator)/float(that.denominator)))
    {
        return true;
    }
    return false;
}

bool Fraction::isLessThan(Fraction that)
{
    if((float(this->numerator)/float(this->denominator))<(float(that.numerator)/float(that.denominator)))
        return true;
    return false;
}

bool Fraction::isEqual(Fraction that)
{
    if((float(this->numerator)/float(this->denominator))==(float(that.numerator)/float(that.denominator)))
        return true;
    return false;
}

void Fraction::reduce()
{

    int a=numerator,b=denominator;
    if (numerator<0)
        a=-numerator;
    if (denominator<0)
        b=-denominator;
    while (a!=b)
    {
    if(a>b)
        a-=b;
    if(b>a)
        b-=a;
    }
    int gcd=a;
    numerator/=gcd;
    denominator/=gcd;
}

Fraction Fraction::times(Fraction that)
{
    int num=this->numerator*that.numerator;
    int den=this->denominator*that.denominator;
    Fraction result(num,den);
    result.reduce();
    return result;
}

Fraction Fraction::plus(Fraction that)
{
    int thisDen,thatDen;
    int a=thisDen= this->denominator;
    int b=thatDen= that.denominator;
    int thisNum= this->numerator;
    int thatNum= that.numerator;
    while (a!=b)
    {
    if(a>b)
        a-=b;
    if(b>a)
        b-=a;
    }
    int gcd=a;

    int LCM=(this->denominator*that.denominator)/gcd;

    for (int i=0;;i++)
    {
        if(this->denominator*i==LCM)
        {
            thisNum*=i;
            break;
        }
    }
    for (int i=0;;i++)
    {
        if(that.denominator*i==LCM)
        {
            thatNum*=i;
            break;
        }
    }
    Fraction result((thisNum+thatNum),LCM);
    result.reduce();
    return result;
}

Fraction Fraction::minus(Fraction that)
{
    int thisDen,thatDen;
    int a=thisDen= this->denominator;
    int b=thatDen= that.denominator;
    int thisNum= this->numerator;
    int thatNum= that.numerator;
    while (a!=b)
    {
    if(a>b)
        a-=b;
    if(b>a)
        b-=a;
    }
    int gcd=a;

    int LCM=(this->denominator*that.denominator)/gcd;

    for (int i=0;;i++)
    {
        if(this->denominator*i==LCM)
        {
            thisNum*=i;
            break;
        }
    }
    for (int i=0;;i++)
    {
        if(that.denominator*i==LCM)
        {
            thatNum*=i;
            break;
        }
    }
    Fraction result(thisNum-thatNum,LCM);
    result.reduce();
    return result;
}

Fraction Fraction::by(Fraction that)
{
    Fraction result;
    result.numerator=this->numerator*that.denominator;
    result.denominator=this->denominator*that.numerator;
    result.reduce();
    return result;
}


Fraction::Fraction(int numerator,int denominator)
{
    this->numerator=numerator;
    this->denominator=denominator;
}

string Fraction::toString()
{
    if(denominator<0)
    {
        numerator=-numerator;
        denominator=-denominator;
    }
    int test=numerator;
    numerator=numerator%denominator;
    if(!numerator)
    {
        cout<<test/denominator;
        return " ";
    }
    for (int i=-999999;;i++)
    {
        if (((denominator*i)+numerator==test))
        {
            if(i!=0)
             {
                if (numerator<0)
                    numerator=-numerator;
                cout<<i<<" "<<numerator<<"/"<<denominator;
                return " ";
             }
            break;
        }
    }
    cout<< numerator<<"/"<<denominator;
    return " ";
}

double Fraction::toDouble()
{
    return double(numerator)/double(denominator);
}

int main()
{
    Fraction fraction[2];
    string input="";
    for(int a=0;a<2;a++)
    {
        getline(cin,input);
        int i=0;
        for (;input[i]!='/';i++);
        string s=input.substr(0,i);
        int num=stoi(s);
        s=input.substr(i+1);
        int den=stoi(s);
        fraction[a]= Fraction(num,den);
    }
    if (fraction[0].isGreaterThan(fraction[1]))
    {
        cout<<fraction[0].toString()<<" > ";
        cout<<fraction[1].toString()<<endl;
    }

    if (fraction[0].isLessThan(fraction[1]))
    {
       cout<<fraction[0].toString()<<" < ";
       cout<<fraction[1].toString()<<endl;
    }

    if (fraction[0].isEqual(fraction[1]))
    {
       cout<<fraction[0].toString()<<" = ";
       cout<<fraction[1].toString()<<endl;
    }


    return 0;
}
