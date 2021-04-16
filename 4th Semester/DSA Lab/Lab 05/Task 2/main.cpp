#include<iostream>
using namespace std;

int findMax( int **Arr, int rows,int mid,int *Max)
{
    int Max_index = 0;
    for (int i = 0; i < rows; i++)
    {   if (*Max < Arr[i][mid])
        {   *Max = Arr[i][mid];
            Max_index = i;
        }
    }
    return Max_index;
}
int findPeak( int **Arr,int rows, int cols,int mid)
{    int Max = 0;
    int Max_index = findMax( Arr,rows,mid, &Max);
    if (mid == 0 || mid == cols-1)
        return Max;
   else if (Max >= Arr[Max_index][mid-1] && Max >= Arr[Max_index][mid+1])
        return Max;
   else if (Max < Arr[Max_index][mid-1])
        return findPeak( Arr,rows, cols,mid-1);
   else if(Max<Arr[Max_index][mid+1])
        return findPeak( Arr,rows, cols, mid+1);
}


int main()
{
    int rows, cols;
    cout<<"Enter Rows: ";
    cin>>rows;
      cout<<"Enter Cols: ";
    cin>>cols;
int **Arr;
Arr= new int *[cols];
for(int i=0;i<rows;i++)
{
Arr[i]= new int[cols];
}
   for(int i=0;i<rows;i++)
   {
       for(int j=0;j<cols;j++)
       {
           cin>>Arr[i][j];
        }
   }
    cout<<"The Peak is: "<<findPeak(Arr,rows,cols,cols/2)<<endl;
    return 0;
}
