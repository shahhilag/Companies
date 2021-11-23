#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &value:m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}

int main()
{
     dfile();
     map<int,string> m;
     m[1]="abc";
     m[5]="cdc";
     m[3]="acd";
     m[5]="cde";
     print(m);
     auto it=m.find(5);
     if(it!=m.end())
     {
         m.erase(it);
     }
     print(m);
    //  if(it==m.end())
    //  {
    //      cout<<"No value";
    //  }
    //  else
    //  {
    //      cout<<(*it).first<<" "<<(*it).second<<endl;
    //  }
     return 0;
}