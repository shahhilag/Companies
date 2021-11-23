#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<vector<int>> makeZeroes(vector<vector<int>> arr)
{
    vector<int> r;
    vector<int> c;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            if(arr[i][j]==0)
            {
                r.push_back(i);
                c.push_back(j);
            }
        }
    }   
    for(int i=0;i<r.size();i++)
    {
        int temp=r[i];
        fill(arr[temp].begin(),arr[temp].end(),0);
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            for(int k=0;k<c.size();k++)
            {
                if(j==c[k])
                {
                    arr[i][j]=0;
                }
            }
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