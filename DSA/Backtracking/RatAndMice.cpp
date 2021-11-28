#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void helper(vector<string> arr,vector<vector<int>> &b,vector<vector<int>> &v,int i,int j,int n,int m)
{
     //Base Case
     if(i==n and j==m)
     {
          for(int k=0;k<=n;k++)
          {
               for(int l=0;l<=m;l++)
               {
                    v[k][l]=b[k][l];
               }
               cout<<endl;
          }
          return;
     }
     //Rec Case
     //Move Down
     if(i!=n and arr[i+1][j]!='X' and b[i+1][j]!=1)
     {
          b[i+1][j]=1;
          helper(arr,b,v,i+1,j,n,m);
          b[i+1][j]=0;
     }
     //Move Up
     if(i>0 and arr[i-1][j]!='X' and b[i-1][j]!=1)
     {
          b[i-1][j]=1;
          helper(arr,b,v,i-1,j,n,m);
          b[i-1][j]=0;
     }
     //Move Right
     if(j!=m and arr[i][j+1]!='X' and b[i][j+1]!=1)
     {
          b[i][j+1]=1;
          helper(arr,b,v,i,j+1,n,m);
          b[i][j+1]=0;
     }
     //Move Left
     if(j>0 and arr[i][j-1]!='X' and b[i][j-1]!=1)
     {
          b[i][j-1]=1;
          helper(arr,b,v,i,j-1,n,m);
          b[i][j-1]=0;
     }
     return;
}

vector<vector<int>> ratAndMice(vector<string> arr) {
     int n=arr.size();
     int m=arr[0].size();
     vector<vector<int>> v(n,vector<int>(m,0));
     vector<vector<int>> b(n,vector<int>(m,0));
     b[0][0]=1;
     helper(arr,b,v,0,0,n-1,m-1);
     return v;
}

int main()
{
     dfile();
     int n;
     int m;
     cin>>n>>m;
     vector<string> arr(n);
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     vector<vector<int>> ans=ratAndMice(arr);
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {
               cout<<ans[i][j]<<" ";
          }
          cout<<endl;
     }
     return 0;
}