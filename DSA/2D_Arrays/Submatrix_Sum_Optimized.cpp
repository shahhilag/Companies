#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int m=v.size();
    int n=v[0].size();
    int M=m;
    int N=n;
    vector<vector<int>> aux=v;
    vector<vector<int>> mat=v;
    for(int i=1;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            aux[i][j]=mat[i][j]+aux[i-1][j];
        }
    }
    //Row
    for(int i=0;i<M;i++)
    {
        for(int j=1;j<N;j++)
        {
            aux[i][j]+=aux[i][j-1];
        }
    }
    int res=aux[er][ec];
    if(sr>0)
    {
        res=res-aux[sr-1][ec];
    }
    if(sc>0)
    {
        res=res-aux[er][sc-1];
    }
    if(sr>0 and sc>0)
    {
        res=res+aux[sr-1][sc-1];
    }
    return res;
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