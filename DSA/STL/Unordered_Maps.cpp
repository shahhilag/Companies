#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void print(unordered_map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
     dfile();
     unordered_map<int,string> m;
     m[1]="abc";
     m[5]="cdc";
     m[3]="acd";
     m[6]="a";
     m[5]="cde";
     print(m);
     return 0;
}