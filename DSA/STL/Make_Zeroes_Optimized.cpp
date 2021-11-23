#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<vector<int>> makeZeroes(vector<vector<int>> arr)
{
  int m=arr.size();
  int n=arr[0].size();
  int x=1;
  int y=1;
  for(int j=0;j<n;j++)
  {
      if(arr[0][j]==0) x=0;
  }  
  for(int i=0;i<m;i++)
  {
      if(arr[i][0]==0) y=0;
  }
  //inner matrix
  for(int i=1;i<m;i++)
  {
      for(int j=1;j<n;j++)
      {
          if(arr[i][j]==0)
          {
          arr[i][0]=0;
          arr[0][j]=0;  
          }
      }
  }
  for(int j=1;j<n;j++)
  {
      if(arr[0][j]==0)
      {
          for(int i=0;i<m;i++)
          {
              arr[i][j]=0;
          }
      }
  }
  for(int i=1;i<m;i++)
  {
      if(arr[i][0]==0)
      {
          for(int j=0;j<n;j++)
          {
              arr[i][j]=0;
          }
      }
  }
  if(y==0)
  {
      for(int i=0;i<m;i++)
      {
          arr[i][0]=0;
      }
  }
  if(x==0)
  {
      for(int j=0;j<n;j++)
      {
          arr[0][j]=0;
      }
  }
  return arr;
}

int main()
{
     dfile();
     int m;
     cin>>m;
     int n;
     cin>>n;
     vector<vector<int>> mat;
     vector<int> m1;
     for(int i=0;i<m;i++)
     {
          for(int j=0;j<n;j++)
          {
              int a;
              cin>>a;
              m1.push_back(a);
          }
          mat.push_back(m1);
          m1.clear();
     }
    
    vector<vector<int>> ans= makeZeroes(mat);
    for(int i=0;i<m;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<ans[i][j]<<" ";
          }
          cout<<endl;
     }
     return 0;
}