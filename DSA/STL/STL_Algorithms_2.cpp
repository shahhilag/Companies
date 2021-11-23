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
     vector<int> v={-2,-1,-5};
     cout<<all_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;
     cout<<none_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;
     cout<<any_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;
     return 0;
}