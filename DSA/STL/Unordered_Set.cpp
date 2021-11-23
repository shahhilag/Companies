#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void print(unordered_set<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
}

int main()
{
     dfile();
     unordered_set<string> s;
     s.insert("abc");
     s.insert("zsdf");
     s.insert("abc");
     print(s);
     auto it=s.find("abc");
     if(it!=s.end())
     {
         s.erase(it);
     }
     print(s);
     return 0;
}