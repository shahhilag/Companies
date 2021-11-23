#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int earthLevel(int k)
{
    int ans=0;
    while(k>0)
    {
        k=k&(k-1);
        ans++;
    }
    return ans;
}

int main()
{
     dfile();
     int k;
     cin>>k;
     cout<<earthLevel(k);
     return 0;
}