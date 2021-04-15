#include <iostream>
#include <cmath>
using namespace std;

class Point2D
{
private:
    double x;
    double y;
public:
    Point2D(){x=0,y=0;};
    Point2D(double x, double y);
    string toString();
    double toDouble();
    double distanceTo(Point2D that);
    double get_x(){return x;}
    double get_y(){return y;}
};

class Line2D
{
private:
    double slope;
    double y_intercept;
public:
    Line2D(double slope,double y_intercept);
    Line2D(Point2D pointA, Point2D pointB);
    string toString();
    void print();
};

void Line2D::print()
{
    cout<<"y = "<<slope<<" x ";
    if(y_intercept<0)
        cout<<" - "<<y_intercept<<endl;
    else
        cout<<" + "<<y_intercept<<endl;
}

Line2D::Line2D(double slope, double y_intercept)
{
    this->slope=slope;
    this->y_intercept=y_intercept;
}

Line2D::Line2D(Point2D pointA, Point2D pointB)
{
    slope=((pointB.get_y()-pointA.get_y())/(pointB.get_x()-pointA.get_x()));
    y_intercept=((-slope)*pointA.get_x())+pointA.get_y();
}

Point2D::Point2D(double x, double y)
{
    this->x=x;
    this->y=y;
}

double Point2D::distanceTo(Point2D that)
{
    double distance=sqrt(pow((that.x-this->x),2)+pow((that.y-this->y),2));
    return distance;
}
int main()
{
    double x, y;
    Point2D point[2];
    for(int i=0;i<2;i++)
    {
        cin>>x>>y;
        point[i]= Point2D(x,y);
    }
    Line2D line(point[0],point[1]);
    line.print();
    return 0;
}
