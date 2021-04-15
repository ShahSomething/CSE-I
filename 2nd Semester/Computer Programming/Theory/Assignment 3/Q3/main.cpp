#include <iostream>

using namespace std;
int main ()
{
    cout<<"This program is designed to exhibit the positive divisors of positive "<<endl;
    cout<<"integers supplied by you. The program will repeatedly prompt you to enter a "<<endl;
    cout<<"positive integer. Each time you enter a positive integer, the program will "<<endl;
    cout<<"print all the divisors of your integer in a column and in decreasing order."<<endl;
    char ch='y';
    int num;
    do
    {
        cout<<"Please enter a positive integer: ";
        cin>>num;
        if(num<=0)
            cout<<num<<" is not a positive number.\n";
        else
        {
            for(int i=num;i>0;i--)
            {
                if (num%i==0)
                    cout<<i<<endl;
            }
            do
            {
                cout<<"Would you like to see the divisors of another integer (Y/N)? ";
                cin>>ch;
                if(ch!='y'&& ch!='Y'&& ch!='n'&& ch!='N')
                    cout<<"Please respond with Y (or y) for yes and N (or n) for no.\n";
            }while(ch!='y'&& ch!='Y'&& ch!='n'&& ch!='N');
        }

    }while(ch!='n' && ch!='N');
}





