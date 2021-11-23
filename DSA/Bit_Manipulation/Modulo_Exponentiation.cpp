#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int power(int x, int y, int mod)
{
    long long ans=1;
    long long res;
    x=(x%mod);
    while(y>0)
    {
        int last_bit=(y&1);
        if(last_bit)
        {
            ans=(ans*x)%mod;
        }
        x=((x*x)%mod);
        y=y>>1;
    }
    res=(ans%mod);
    return res;
}

int main()
{
     dfile();
     int x,y;
     cin>>x>>y;
     int mod;
     cin>>mod;
     cout<<power(x,y,mod);
     return 0;
}