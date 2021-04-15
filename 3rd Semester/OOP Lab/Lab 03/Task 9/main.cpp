#include <iostream>
#include<string>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
};

Fraction::Fraction(int numerator,int denominator)
{
    Fraction::numerator=numerator;
    Fraction::denominator=denominator;
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
    int num,den;
    string input="";
    getline(cin,input);
    int i=0;
    for (;input[i]!='/';i++);
    string s=input.substr(0,i);
    num=stoi(s);
    s=input.substr(i+1);
    den=stoi(s);

    Fraction fraction(num,den);
    cout<<fraction.toString()<<" is "<<fraction.toDouble()<<" in decimal"<<endl;
    return 0;
}
