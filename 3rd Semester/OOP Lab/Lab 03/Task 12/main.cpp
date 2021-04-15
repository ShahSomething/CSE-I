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
};

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
    cout<<"Distance = "<<point[0].distanceTo(point[1]);
    return 0;
}
