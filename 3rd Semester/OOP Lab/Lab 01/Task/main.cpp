#include <iostream>

using namespace std;

class firstclass{
private:
    int num1;
    float num2;
public:
    firstclass(){
    num1=0;
    num2=0.0;
    }
    firstclass(int a, float b){
    num1=a;
    num2=b;
    }

    void show()
    {
        cout<<"num1 is: "<<num1<<endl;
        cout<<"num2 is: "<<num2<<endl;
    }

    void reveal(){
        cout<<"Address is: "<<this<<endl;
    }
};

int main()
{
    firstclass c1,c2(4,3.5);
    c1.reveal();
    c1.show();
    c2.reveal();
    c2.show();
    return 0;
}
