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
     vector<int> v={2,3,5,6,7};
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
     cout<<endl;
     vector<int> ::iterator it=v.begin();
     for(it=v.begin();it!=v.end();it++)
     {
         cout<<(*it)<<endl;
     }
     return 0;
}