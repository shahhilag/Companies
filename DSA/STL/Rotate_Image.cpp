#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void rotate(vector<vector<int>>& matrix) {
     for(int i=0;i<matrix.size();i++)
     {
          for(int j=0;j<=i;j++)
          {
               swap(matrix[i][j],matrix[j][i]);
          }
     }
     for(int i=0;i<matrix.size();i++)
     {
          reverse(matrix[i].begin(),matrix[i].end());
     }

     
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<vector<int>> mat;
     vector<int> m1;
     for(int i=0;i<n;i++)
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
    
     rotate(mat);
    for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
          {
               cout<<mat[i][j]<<" ";
          }
          cout<<endl;
     }
    
     return 0;
}