#include <iostream>

using namespace std;

class Point{
protected:
    float x,y;
public:
    Point();
    Point(int a, int b);
    void Setx(int a);
    void Sety(int a);
    int Getx();
    int Gety();
    void show();
};
Point::Point()
{
    x=0,y=0;
}

Point::Point(int a, int b)
{
    x=a,y=b;
}

void Point::Setx(int a)
{
    x=a;
}

void Point::Sety(int a)
{
    y=a;
}

int Point::Getx()
{
    return x;
}

int Point::Gety()
{
    return y;
}

void Point::show()
{
    cout<<"Point: "<<"( "<<x<<" , "<<y<<")";
}

class Circle: public Point
{
protected:
    float radius;
public:
    Circle();
    Circle(float r, Point p);
    Circle(float r, float a, float b);
    void SetR(float R);
    float GetR();
    float Radius();
    float Circumference();
};

Circle::Circle()
{
    radius=0,x=0,y=0;
}

Circle::Circle(float r, Point p)
{
    radius=r,x=p.Getx(),y=p.Gety();
}

Circle::Circle(float r, float a, float b)
{
    radius=r, x=a, y=b;
}

void Circle::SetR(float R)
{
    radius=R;
}

float Circle::GetR()
{
    return radius;
}

float Circle::Circumference()
{
    return 2*3.14*radius;
}

float Circle::Radius()
{
    return Circumference()/(2*3.14);
}

class Cylinder: public Point
{
protected:
    float radius,height;
public:
    Cylinder(float r,float h, Point p);
    Cylinder(float r=0,float h=0, float xx=0,float yy=0);
    Cylinder(float h, Circle C);
    float Area();
    float Vol();
};
Cylinder::Cylinder(float r,float h, Point p)
{
    radius=r;
    height=h;
    x=p.Getx();
    y=p.Gety();
}
Cylinder::Cylinder(float r,float h,float xx,float yy)
{
    radius=r;
    height=h;
    x=xx;
    y=yy;
}
Cylinder::Cylinder(float h, Circle C)
{
    height=h;
    radius=C.GetR();
    x=C.Getx();
    y=C.Gety();
}
float Cylinder::Area()
{
    Circle c(radius,x,y);
    return c.Circumference()*(radius+height);
}
float Cylinder::Vol()
{
    Circle c(radius,x,y);
    return c.Circumference()*radius*height;
}

int main()
{
    Point P(2,3);
    Circle C(4,P);
    C.show();
    cout<<"\nRadius of Circle: "<<C.GetR()<<endl;
    cout<<"Circumference of Circle: "<<C.Circumference()<<endl;
    Cylinder Cy(6.4,C);
    cout<<"Area of Cylinder: "<<Cy.Area()<<endl;
    cout<<"Volume of Cylinder: "<<Cy.Vol()<<endl;
    return 0;
}
