#include <iostream>

using namespace std;

struct Point
{
    int width;
    int height;
};
void input(Point *p)
{
    cout<<"Enter Width: ";
    cin>>p->width;
    cout<<"Enter Height: ";
    cin>>p->height;
}
void display(Point p)
{
    for(int i=0;i<p.height;i++)
    {
        for(int j=0;j<p.width;j++)
            cout<<"  *  ";
        cout<<"\n";
    }
}
int main()
{
    Point p;
    input(&p);
    display(p);
    return 0;
}
