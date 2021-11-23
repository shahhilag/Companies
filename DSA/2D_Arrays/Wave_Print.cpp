#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{ 
   vector<int> v1;
   for(int j=n-1;j>=0;j--)
   {
       if(j%2==0)
       {
           for(int i=m-1;i>=0;i--)
           {
               v1.push_back(arr[i][j]);
           }
       }
       else if(j%2!=0)
       {
           for(int i=0;i<m;i++)
           {
               v1.push_back(arr[i][j]);
           }
       }
   }
   return v1;   
}

int main()
{
     dfile();
     vector<vector<int>> biga;
     vector<int> smalla;
     int m;
     cin>>m;
     int n;
     cin>>n;
     int a[m][n];
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            smalla.push_back(a[i][j]);
        }
        biga.push_back(smalla);
        smalla.clear();
     } 
     vector<int> ans;
     ans=WavePrint(m,n,biga);
     for(int i=0;i<ans.size();i++)
     {
         cout<<ans[i]<<" ";
     }     
     return 0;
}