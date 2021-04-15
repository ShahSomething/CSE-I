#include <iostream>

using namespace std;

int main()
{
    int m,n,p,q;
    cout<<"Enter no. of rows and columns for Matrix A: ";
    cin>>m>>n;
    cout<<"Enter no. of rows and columns for Matrix B: ";
    cin>>p>>q;
    int A[m][n],B[p][q],C[m][q];
    if(n!=p)
        cout<<"Matrix multiplication no possible";
    else
    {
        cout<<"Enter Matrix A: \n";
        for(int i=0;i<m;i++) // Input A
        {
            for(int j=0;j<n;j++)
                cin>>A[i][j];
        }
        cout<<"Enter Matrix B: \n";
        for(int i=0;i<p;i++) //Input B
        {
            for(int j=0;j<q;j++)
                cin>>B[i][j];
        }
        for(int i=0;i<m;i++) //Multiplication process
        {
            for(int j=0;j<q;j++)
            {
                int sum=0;
                for(int k=0;k<n;k++)
                {
                    sum=sum+A[i][k]*B[k][j];
                }
                C[i][j]=sum;
            }
        }
        cout<<"Matrix A: \n";
        for(int i=0;i<m;i++) //Output A
        {
            cout<<"| ";
            for(int j=0;j<n;j++)
            {
                cout<<A[i][j]<<"  ";
            }
            cout<<" |\n";
        }
        cout<<"Matrix B: \n";
        for(int i=0;i<p;i++) //Output B
        {
            cout<<"| ";
            for(int j=0;j<q;j++)
            {
                cout<<B[i][j]<<"  ";
            }
            cout<<" |\n";
        }
        cout<<"Multiplication Result:  \n";
        for(int i=0;i<m;i++) //Output C
        {
            cout<<"| ";
            for(int j=0;j<q;j++)
            {
                cout<<C[i][j]<<"  ";
            }
            cout<<" |\n";
        }
    }
    return 0;
}
