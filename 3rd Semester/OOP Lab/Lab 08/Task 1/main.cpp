#include <iostream>

using namespace std;

class Shape
{
protected:
    int area, vol;
public:
    virtual void Area(){area=0;}
    virtual void Volume(){vol=0;}
    virtual void Display()const=0;

};

class Point: public Shape
{
protected:
    int x, y;
public:
    Point():x(0),y(0){}
    Point(int a, int b){x=a,y=b;}
    void Area(){area=0;}
    void Volume(){vol=0;}
    virtual void Display()const{cout<<"Area of Point: "<<area<<endl<<"Volume of Point: "<<vol<<endl;}

};
class Circle: public Point
{
protected:
    int rad;
public:
    Circle():rad(0),Point(0,0){}
    Circle(int a, int b, int r){x=a,y=b,rad=r;}
    void Area(){area=3.14*rad*rad;}
    void Volume(){vol=0;}
    void Display()const{cout<<"Area of Circle: "<<area<<endl<<"Volume of Circle: "<<vol<<endl;}
};
class Cylinder:public Circle
{
protected:
    int height;
public:
    Cylinder():height(0),Circle(0,0,0){}
    Cylinder(int a, int b, int r, int h){x=a,y=b,rad=r,height=h;}
    void Area(){area=2*3.14*rad*(rad+height);}
    void Volume(){vol=3.14*rad*rad*height;}
    void Display()const{cout<<"Area of Cylinder: "<<area<<endl<<"Volume of Cylinder: "<<vol<<endl;}
};

int main()
{
    Shape *sh;
    Point P(3,4);
    Circle C(4,2,5);
    Cylinder Cyl(3,7,4,8);
    sh=&P;
    sh->Area();
    sh->Volume();
    sh->Display();
    sh=&C;
    sh->Area();
    sh->Volume();
    sh->Display();
    sh=&Cyl;
    sh->Area();
    sh->Volume();
    sh->Display();
    return 0;
}
