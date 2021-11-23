#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int defkin(int W, int H, vector<pair<int, int>> position)
{
    vector<int> a;
    vector<int> b;
    a.push_back(0);
    b.push_back(0);
    for(int i=0;i<position.size();i++)
    {
         a.push_back(position[i].first);
         b.push_back(position[i].second);
    }
    a.push_back(W+1);
    b.push_back(H+1); 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int wmaximum=0,hmaximum=0;
    for(int i=0;i<a.size()-1;i++)
    {
         wmaximum=max(wmaximum,(a[i+1]-a[i]-1));
         hmaximum=max(hmaximum,(b[i+1]-b[i]-1));
    }
    int ans=wmaximum*hmaximum;
    return ans;
}

int main()
{
     dfile();
     int w,h;
     cin>>w>>h;
     int n;
     cin>>n;
     vector<pair<int,int>> v1;
     pair<int,int> p;
     for(int i=0;i<n;i++)
     {
        cin>>p.first>>p.second;
        v1.push_back(make_pair(p.first,p.second)); 
     }   
     int v2 = defkin(w,h,v1);
     cout<<v2;
     return 0;
}