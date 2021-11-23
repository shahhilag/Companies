#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    sort(v.begin(),v.end());
    return v;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<pair<int,int>> v1;
     pair<int,int> p;
     for(int i=0;i<n;i++)
     {
        cin>>p.first>>p.second;
        v1.push_back(make_pair(p.first,p.second)); 
     }   
     vector<pair<int,int>> v2 = sortCartesian(v1);
     for(int i=0;i<v2.size();i++)
     {
         cout<<v2[i].first<<" "<<v2[i].second<<" "<<" ";
     }
     return 0;
}