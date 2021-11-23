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
     map<int,string> m;
     m[1]="abc";
     m[5]="cdc";
     m[3]="acd";
     m.insert({4,"afg"});
     for(auto it=m.begin();it!=m.end();it++)
     {
         cout<<(*it).first<<" "<<(*it).second<<endl;
     }
     return 0;
}