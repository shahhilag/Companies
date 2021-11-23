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
     p={2,"abc"};
     pair<int,string> &p1=p;
     p1.first=3;
     cout<<p.first<<" "<<p.second;
     return 0;
}