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
     unordered_map<string,int> m;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         m[s]++;
     }
     int q;
     cin>>q;
     while(q--)
     {
         string s;
         cin>>s;
         cout<<m[s]<<endl;
     }
     return 0;
}