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
     set<string> s;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         string str;
         cin>>str;
         s.insert(str);
     }
     for(auto &value:s)
     {
         cout<<value<<endl;
     }
     return 0;
}