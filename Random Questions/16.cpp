#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void solve()
{
    int x,y;
    cin>>x>>y;
    if(y==0)
    {
        cout<<x<<endl;
    }
    else if(y==x)
    {
        cout<<(y*2)-1<<endl;
    }
    else
    {
        int diff=x-y;
        int ans=0;
        ans=(y*2)+diff;
        cout<<ans<<endl;
    }

}

int main()
{
    dfile();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}