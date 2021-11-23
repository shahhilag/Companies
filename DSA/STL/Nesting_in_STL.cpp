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
     // map<pair<int,int>,int> m;
     // pair<int,int> p1,p2;
     // p1={1,2};
     // p2={2,3};
     // cout<<(p1<p2)<<endl;
     // cout<<(p1>p2)<<endl;
     map<set<int>,int> m;
     set<int> s1,s2;
     s1={1,2,3};
     s2={2,3};
     cout<<(s1<s2)<<endl;
     cout<<(s1>s2)<<endl;
     return 0;
}