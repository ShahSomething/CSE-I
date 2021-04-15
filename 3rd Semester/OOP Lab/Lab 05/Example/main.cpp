#include <iostream>
using namespace std;

class Polygon {
    protected:
        int height;
        int length;
    public:
        void set_values(int a, int b){    height = a;    length = b;   }
};

class Rectangle: public Polygon{
    public:
        double area() {    return (height*length);   }
};
class Triangle: public Polygon{
    public:
        double area(){    return (height*length)/2;   }
};

int main(){
 Rectangle r1;
 Triangle t1;

 r1.set_values(10, 20);
 cout << "Area of Rectangle: " << r1.area() << endl;
 t1.set_values(10, 20);
 cout << "Area of Triangle: " << t1.area() << endl;
 return 0;
 }
