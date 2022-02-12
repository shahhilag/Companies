#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void solve()
{
    ll x;
    cin>>x;
    ll a=x,b=0,c=x;
    for(int i=0;i<31;i++)
    {
        if(!(c&(1<<i)))
        {
            c=c|(1<<i);
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
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