#include <iostream>

using namespace std;

int main()
{
    int UC,ID;
    float AC,SA,NA;
    cout << "Customer IDNO: ";
    cin>>ID;
    cout << "Units Consumed: ";
    cin>>UC;
    if(UC<200)
    {
        AC=UC*1.20;SA=0;NA=AC+SA;
        cout<<"Amount Charges @Rs. 1.20 per unit: "<<AC<<endl;
        cout<<"Surcharge Amount : "<<SA<<endl;
        cout<<"Net Amount Paid By the Customer : "<<NA;
    }
    else if(UC<400)
    {
        AC=UC*1.50;SA=0;NA=AC+SA;
        cout<<"Amount Charges @Rs. 1.50 per unit: "<<AC<<endl;
        cout<<"Surcharge Amount : "<<SA<<endl;
        cout<<"Net Amount Paid By the Customer : "<<NA;
    }
    else if(UC<600)
    {
        AC=UC*1.80;SA=(AC*15)/100;NA=AC+SA;
        cout<<"Amount Charges @Rs. 1.80 per unit: "<<AC<<endl;
        cout<<"Surcharge Amount : "<<SA<<endl;
        cout<<"Net Amount Paid By the Customer : "<<NA;
    }
    else
    {
        AC=UC*2.00;SA=(AC*15)/100;NA=AC+SA;
        cout<<"Amount Charges @Rs. 2.00 per unit: "<<AC<<endl;
        cout<<"Surcharge Amount : "<<SA<<endl;
        cout<<"Net Amount Paid By the Customer : "<<NA;
    }
    return 0;
}
