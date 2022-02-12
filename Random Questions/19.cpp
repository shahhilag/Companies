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
    ll x,a,b;
    cin>>x>>a>>b;
    if(x%a==0)
    {
        ll div=x/a;
        ll prod=b*div;
        int sum=0;
        bool flag=1;
        for(int i=0;i*i<=prod;i++)
        {
            if(sum>x)
            {
                flag=0;
                break;
            }
            if(prod%i==0)
            {
                sum+=i;
                if(prod/i!=i)
                {
                    sum+=prod/i;
                }
            }
        }
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