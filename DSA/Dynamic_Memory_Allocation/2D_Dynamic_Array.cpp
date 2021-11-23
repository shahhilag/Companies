#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int ** create2DArray(int rows,int cols)
{
    int ** arr=new int *[rows];
    for(int i=0;i<rows;i++)
    {
        arr[i]=new int[cols];
    }
    int value=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            arr[i][j]=value;
            value++;
        }
    }
    return arr;
}

int main()
{
     dfile();
     int rows,cols;
     cin>>rows>>cols;
     int ** arr=create2DArray(rows,cols);
     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<cols;j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
}