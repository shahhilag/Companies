#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void print(set<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }
}

int main()
{
     dfile();
     set<string> s;
     s.insert("abc");
     s.insert("zsdf");
     s.insert("bcd");
     s.insert("abc");
     auto it=s.find("abc");
     if(it!=s.end())
     {
         cout<<(*it);
     }
     print(s);
     return 0;
}