#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int ans=0;
    for(int i=sr;i<=er;i++)
    {
        for(int j=sc;j<=ec;j++)
        {
            ans+=v[i][j];
        }
    }
    return ans;
}

int main()
{
     dfile();
     int m,n;
     cin>>m>>n;
     vector<vector<int>> v;
    
     for(int i=0;i<m;i++)
     {
          vector<int> pushv;
          int a[n];
         for(int j=0;j<n;j++)
         {
             cin>>a[j];
             pushv.push_back(a[j]);
         }
         v.push_back(pushv);
     }    
     int sr;
     cin>>sr;
     int sc;
     cin>>sc;
     int er;
     cin>>er;
     int ec;
     cin>>ec;
     int ans=sum(v,sr,sc,er,ec);
     cout<<ans<<endl;
     return 0;
}