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
     unordered_set<string> s;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         string str;
         cin>>str;
         s.insert(str);
     }
     int q;
     cin>>q;
     while(q--)
     {
         string str;
         cin>>str;
         if(s.find(str)==s.end())
         {
             cout<<"No"<<endl;
         }
         else
         {
             cout<<"Yes"<<endl;
         }
     }
     return 0;
}