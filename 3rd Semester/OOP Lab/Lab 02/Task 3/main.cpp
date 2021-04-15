#include <iostream>
#include <cstdio>
using namespace std;

const int SIZE=50;

class IntegerSet{
private:
    int Array[SIZE];
public:

    IntegerSet(){
        for (int i=0;i<SIZE;i++)
        {
            Array[i]=0;
        }
    }
    void NewIntegerSet(int A[])
    {
        for(int i=0;i<SIZE;i++)
        {
            for (int a=0;a<SIZE;a++)
            {
                if (A[a]==i)
                    Array[i]=1;
                else
                    Array[i]=0;
            }
        }
    }
    void SetPrint()
    {
        int c=0;
        for (int i=0;i<SIZE;i++)
        {
            if (Array[i]==1)
            {
                c++;
                if (c>1)
                    cout<<", ";
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    void InsertElement(int k)
    {
        Array[k]=1;
    }
    void DeleteElement(int m)
    {
        Array[m]=0;
    }
    IntegerSet UnionOfIntegerSet(IntegerSet A)
    {
        IntegerSet B;
        for(int i=0;i<SIZE;i++)
        {
            if (A.Array[i] || Array[i])
                B.Array[i]=1;
            else
                B.Array[i]=0;
        }
        return B;
    }
    IntegerSet IntersectionOfIntegerSet(IntegerSet A)
    {
        IntegerSet B;
        for(int i=0;i<SIZE;i++)
        {
            if ((!(A.Array[i]) || !(Array[i])))
            {
                B.Array[i]=0;
            }

            else
                B.Array[i]=1;
        }
        return B;
    }
    void IsEqualTo(IntegerSet A)
    {
        int counter=0;
        for(int i=0;i<SIZE;i++)
        {
            if (A.Array[i]==Array[i])
                counter++;
        }
        if (counter==SIZE)
            cout<<"Integer Sets are Equal."<<endl;
        else
            cout<<"Integer Sets are Not Equal."<<endl;
    }

};

int main()
{
    int x[SIZE],y[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        x[i]=rand()%50;
    }
    for(int i=0;i<SIZE;i++)
    {
        y[i]=rand()%50;
    }
    IntegerSet i1,i2,i3;
    i1.NewIntegerSet(x);
    i1.SetPrint();
    i2.NewIntegerSet(y);
    i2.SetPrint();
    i1.InsertElement(33);
    i1.DeleteElement(44);
    i3= i1.UnionOfIntegerSet(i2);
    i3.SetPrint();
    i3 = i1.IntersectionOfIntegerSet(i2);
    i3.SetPrint();
    i1.IsEqualTo(i2);

    return 0;
}
