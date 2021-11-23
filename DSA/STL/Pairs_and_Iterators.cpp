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
     vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
     vector<pair<int,int>> ::iterator it;
     for(it=v_p.begin();it!=v_p.end();it++)
     {
        //  cout<<((*it).first)<<" "<<((*it).second)<<endl;
         cout<<((it)->first)<<" "<<((it)->second)<<endl;
     }
     return 0;
}