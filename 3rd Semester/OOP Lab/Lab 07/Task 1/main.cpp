#include <iostream>

using namespace std;



class RationalNumber
{
private:
    int num;
    int den;
public:
    RationalNumber(): num(0),den(0){}
    RationalNumber(int a, int b)
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
    void ShowRN()
    {
        cout<<"Number: "<<num<<"/"<<den<<endl;
    }
    friend RationalNumber operator+(RationalNumber ob1, RationalNumber ob2);
    friend RationalNumber operator-(RationalNumber ob1, RationalNumber ob2);
    friend RationalNumber operator*(RationalNumber ob1, RationalNumber ob2);
    friend RationalNumber operator/(RationalNumber ob1, RationalNumber ob2);
    friend bool operator>(RationalNumber ob1, RationalNumber ob2);
    friend bool operator<(RationalNumber ob1, RationalNumber ob2);
    friend bool operator>=(RationalNumber ob1, RationalNumber ob2);
    friend bool operator<=(RationalNumber ob1, RationalNumber ob2);
    friend bool operator==(RationalNumber ob1, RationalNumber ob2);
    friend bool operator!=(RationalNumber ob1, RationalNumber ob2);
};

RationalNumber operator+(RationalNumber ob1, RationalNumber ob2)
{
    RationalNumber temp;
    temp.num = (ob1.num*ob2.den)+ (ob1.den*ob2.num);
    temp.den = ob1.den*ob2.den;
    return temp;
}

RationalNumber operator-(RationalNumber ob1, RationalNumber ob2)
{
    RationalNumber temp;
    temp.num = (ob1.num*ob2.den)- (ob1.den*ob2.num);
    temp.den = ob1.den*ob2.den;
    return temp;
}

RationalNumber operator*(RationalNumber ob1, RationalNumber ob2)
{
    RationalNumber temp;
    temp.num = ob1.num*ob2.num;
    temp.den = ob1.den*ob2.den;
    return temp;
}

RationalNumber operator/(RationalNumber ob1, RationalNumber ob2)
{
    RationalNumber temp;
    temp.num = ob1.num*ob2.den;
    temp.den = ob1.den*ob2.num;
    return temp;
}

bool operator>(RationalNumber ob1, RationalNumber ob2)
{
    if (ob1.num/ob1.den>ob2.num/ob2.den)
        return true;
    else
        return false;
}
bool operator<(RationalNumber ob1, RationalNumber ob2)
{
    if (ob1.num/ob1.den<ob2.num/ob2.den)
        return true;
    else
        return false;
}
bool operator>=(RationalNumber ob1, RationalNumber ob2)
{
    if (ob1.num/ob1.den>=ob2.num/ob2.den)
        return true;
    else
        return false;
}
bool operator<=(RationalNumber ob1, RationalNumber ob2)
{
    if (ob1.num/ob1.den<=ob2.num/ob2.den)
        return true;
    else
        return false;
}
bool operator==(RationalNumber ob1, RationalNumber ob2)
{
    if (ob1.num/ob1.den==ob2.num/ob2.den)
        return true;
    else
        return false;
}
bool operator!=(RationalNumber ob1, RationalNumber ob2)
{
    if (ob1.num/ob1.den!=ob2.num/ob2.den)
        return true;
    else
        return false;
}

int main()
{
    RationalNumber r1(1,1),r2(1,3);
    r1.ShowRN();
    r2.ShowRN();
    RationalNumber r3=r1+r2;
    cout<<"Addition: ";
    r3.ShowRN();
    r3=r1-r2;
    cout<<"Subtraction: ";
    r3.ShowRN();
    r3=r1*r2;
    cout<<"Multiplication: ";
    r3.ShowRN();
    r3=r1/r2;
    cout<<"Division: ";
    r3.ShowRN();
    bool result= r1>r2;
    if(result)
        cout<<"R1 is greater than R2.\n";
    else
        cout<<"R1 is Not greater than R2.\n";
    result=r1<r2;
    if(result)
        cout<<"R1 is less than R2.\n";
    else
        cout<<"R1 is Not less than R2.\n";
    result=r1>=r2;
    if(result)
        cout<<"R1 is greater than or equal to R2.\n";
    else
        cout<<"R1 is Not greater than or equal to R2.\n";
    result=r1<=r2;
    if(result)
        cout<<"R1 is less than or equal to R2.\n";
    else
        cout<<"R1 is Not less than or equal to R2.\n";
    result=r1==r2;
    if(result)
        cout<<"R1 is equal to R2.\n";
    else
        cout<<"R1 is Not equal to R2.\n";
    result=r1!=r2;
    if(result)
        cout<<"R1 is Not equal to R2.\n";
    else
        cout<<"R1 is Equal to R2.\n";
    return 0;
}
