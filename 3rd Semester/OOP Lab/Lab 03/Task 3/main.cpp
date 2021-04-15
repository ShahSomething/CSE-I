#include <iostream>

using namespace std;

class AdHocSquare
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
};
AdHocSquare::AdHocSquare(double side)
{
    this->side=side;
}
void AdHocSquare::set_side(double side)
{
    if (side>=0)
        this->side=side;
}
double AdHocSquare::get_area()
{
    return side*side;
}

class LazySquare
{
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
    double area;
    bool side_changed;
};
LazySquare::LazySquare(double side)
{
    this->side=side;
    this->area=side*side;
}
void LazySquare::set_side(double side)
{
    if (side>=0)
    {
        if (side!=this->side)
            side_changed=true;
        else
            side_changed=false;
        this->side=side;
    }
}

double LazySquare::get_area()
{
    if (side_changed)
    {
        area=side*side;
    }
    return area;
}

int main()
{
    AdHocSquare A(8);
    LazySquare B(19);

    cout<<"A: Area= "<<A.get_area()<<endl;
    A.set_side(3);
    cout<<"A: Area= "<<A.get_area()<<endl;

    cout<<"B: Area= "<<B.get_area()<<endl;

    B.set_side(19);
    cout<<"B: Area= "<<B.get_area()<<endl;
    B.set_side(3);
    cout<<"B: Area= "<<B.get_area()<<endl;
    return 0;
}
