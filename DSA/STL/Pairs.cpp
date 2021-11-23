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
     pair<int,string> p;
     p=make_pair(2,"abc");
     cout<<p.first<<" "<<p.second;
     return 0;
}