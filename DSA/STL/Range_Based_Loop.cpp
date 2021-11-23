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
     for(auto it=v.begin();it!=v.end();it++)
     {
         cout<<(*it)<<" ";
     }
     cout<<endl;
     for(int &value:v)//Pass by reference
     {
         value++;
     }
     for(int value:v)//Pass by reference
     {
         cout<<value<<" ";
     }
     cout<<endl;
     return 0;
}