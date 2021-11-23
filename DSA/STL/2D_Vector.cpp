#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9,10},{11,12}};
     for(int i=0;i<arr.size();i++)
     {
          for(int j=0;j<arr[i].size();j++)
          {
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     } 
     cout<<endl;
     return 0;
}