#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool comp(pair<int,int> a, pair<int, int> b){
    float x = sqrt((a.first*a.first) + (a.second*a.second));
    float y = sqrt((b.first*b.first) + (b.second*b.second));
    return x < y;
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    sort(v.begin(), v.end(), comp);
    return v;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<pair<int,int>> v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i].first>>v[i].second;
     }
     vector<pair<int,int>> ans=sortCabs(v);
      for(int i=0;i<ans.size();i++)
     {
         cout<<ans[i].first<<" "<<ans[i].second<<" "<<" ";
     }
     return 0;
}