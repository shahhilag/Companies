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
     map<string,int> m;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         m[s]++;
     }
     for(auto pr:m)
     {
         cout<<pr.first<<" "<<pr.second<<endl;
     }
     return 0;
}