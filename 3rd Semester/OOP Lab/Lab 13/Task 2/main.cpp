#include <iostream>

using namespace std;

class RationalNumber
{
private:
    int num;
    int den;
public:
    RationalNumber();
    RationalNumber(int a, int b);
    void ShowRN();
    RationalNumber operator+(RationalNumber obj);
    RationalNumber operator-(RationalNumber obj);
    RationalNumber operator*(RationalNumber obj);
    RationalNumber operator/(RationalNumber obj);
    bool operator>(RationalNumber obj);
    bool operator<(RationalNumber obj);
    bool operator>=(RationalNumber obj);
    bool operator<=(RationalNumber obj);
    bool operator==(RationalNumber obj);
    bool operator!=(RationalNumber obj);
};

RationalNumber::RationalNumber(): num(0),den(1){}
RationalNumber::RationalNumber(int a, int b)
{
    if(b<=0)
        cout<<"Denominator can not be 0 or negative.";
    else
    {
        num=a,den=b;
    }
    int n=num,d=den;
    while(n!=d)
    {
        if(n>d)
            n-=d;
        else
            d-=n;
    }
    num/=n;
    den/=n;
}
void RationalNumber::ShowRN()
{
    cout<<"Number: "<<num<<"/"<<den<<endl;
}

RationalNumber RationalNumber::operator+(RationalNumber obj)
{
    RationalNumber temp;
    temp.num = (num*obj.den)+ (den*obj.num);
    temp.den = den*obj.den;
    return temp;
}

RationalNumber RationalNumber::operator-(RationalNumber obj)
{
    RationalNumber temp;
    temp.num = (num*obj.den)- (den*obj.num);
    temp.den = den*obj.den;
    return temp;
}

RationalNumber RationalNumber::operator*(RationalNumber obj)
{
    RationalNumber temp;
    temp.num = num*obj.num;
    temp.den = den*obj.den;
    return temp;
}

RationalNumber RationalNumber::operator/(RationalNumber obj)
{
    RationalNumber temp;
    temp.num = num*obj.den;
    temp.den = den*obj.num;
    return temp;
}

bool RationalNumber::operator>(RationalNumber obj)
{
    if (num/den>obj.num/obj.den)
        return true;
    else
        return false;
}
bool RationalNumber::operator<(RationalNumber obj)
{
    if (num/den<obj.num/obj.den)
        return true;
    else
        return false;
}
bool RationalNumber::operator>=(RationalNumber obj)
{
    if (num/den>=obj.num/obj.den)
        return true;
    else
        return false;
}
bool RationalNumber::operator<=(RationalNumber obj)
{
    if (num/den<=obj.num/obj.den)
        return true;
    else
        return false;
}
bool RationalNumber::operator==(RationalNumber obj)
{
    if (num/den==obj.num/obj.den)
        return true;
    else
        return false;
}
bool RationalNumber::operator!=(RationalNumber obj)
{
    if (num/den!=obj.num/obj.den)
        return true;
    else
        return false;
}

int main()
{
    RationalNumber r1(1,1),r2(1,3);
    cout<<"R1: \n";
    r1.ShowRN();
    cout<<"R2: \n";
    r2.ShowRN();
    RationalNumber r3=r1+r2;
    cout<<"After adding r1 to r2 and storing in r3.\n";
    cout<<"R3: \n";
    r3.ShowRN();
    r3=r1-r2;
    cout<<"After subtracting r2 from r1 and storing in r3.\n";
    cout<<"R3: \n";
    r3.ShowRN();
    r3=r1*r2;
    cout<<"After multiplying r1 to r2 and storing in r3.\n";
    cout<<"R3: \n";
    r3.ShowRN();
    r3=r1/r2;
    cout<<"After dividing r1 by r2 and storing in r3.\n";
    cout<<"R3: \n";
    r3.ShowRN();
    if(r1>r2)
        cout<<"R1 is greater than R2\n";
    if(r1<r2)
        cout<<"R1 is less than R2\n";
    if(r1>=r2)
        cout<<"R1 is greater than or equal to R2\n";
    if(r1<=r2)
        cout<<"R1 is less than or equal to R2\n";
    if(r1==r2)
        cout<<"R1 is equal to R2\n";
    if(r1!=r2)
        cout<<"R1 is not equal to R2\n";

    return 0;
}
