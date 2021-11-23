#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int sum;
    vector<int> ans;
    int vsize=num.size();
    int subsetNum=(1<<vsize);
    for(int SubsetMask=0;SubsetMask<subsetNum;SubsetMask++)
    {
         sum=0;
         for(int i=0;i<vsize;i++)
         {
              if((SubsetMask & (1<<i))!=0)
              {
                   sum+=num[i];
              }
         }
         ans.push_back(sum);
    }
    vector<bool> finalans;
    for(int i=0;i<query.size();i++)
    {
         for(int j=0;j<ans.size();j++)
         {
              if(ans[j]==query[i])
              {
                   finalans.push_back(true);
                   break;
              }
              else if(j==(ans.size()-1) and (ans[j]!=query[i]))
              {
                   finalans.push_back(false);
              }
         }
    }
    return finalans;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int m;
     cin>>m;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
          int x;
          cin>>x;
          v.push_back(x);
     } 

     vector<int> q;
     for(int i=0;i<m;i++)
     {
          int x;
          cin>>x;
          q.push_back(x);
     } 
     vector<bool> ans=subsetSum(v,q);
     for(auto x:ans)
     {
          cout<<x<<" ";
     }
     cout<<endl;
     return 0;
}