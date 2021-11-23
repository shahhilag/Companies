#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool compare(pair<string,int> a1,pair<string,int> a2)
{
    int m1=a1.second;
    int m2=a2.second;
    return m1<m2;
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    if(S=="name")
    {
        sort(v.begin(),v.end());
    }
    else
    {
        sort(v.begin(),v.end(),compare);
    }
    return v;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<pair<string,int>> v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i].first>>v[i].second;
     }
     string s;
     cin>>s;
     vector<pair<string,int>> ans=sortFruits(v,s);   
     for(int i=0;i<ans.size();i++)
     {
         cout<<ans[i].first<<ans[i].second<<" ";
     }
     return 0;
}