#include <iostream>
#include<string>

using namespace std;

class ShopItemOrder
{
private:
    string name;
    double unit_price;
    int items_ordered;
public:
    void get()
    {
        cout<<"Enter name of the item: ";
        getline(cin,name);
        cout<<"Enter Unit Price: ";
        cin>>unit_price;
        cout<<"Enter Number of Orders: ";
        cin>>items_ordered;
    }
    double total_price()
    {
        return unit_price*items_ordered;
    }
    void print()
    {
        cout<<"Item name: "<<name<<endl;
        cout<<"Unit price: "<<unit_price<<endl;
        cout<<"Items Ordered: "<<items_ordered<<endl;
        cout<<"Total Price: "<<total_price();
    }
};
int main()
{
    ShopItemOrder item;
    item.get();
    item.print();
    return 0;
}
