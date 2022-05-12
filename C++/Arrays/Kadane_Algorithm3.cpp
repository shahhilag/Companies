#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void solve()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int temp=k;
    int a[n*k];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        while(k>0)
        {
            a[i+(n*k)]=a[i];
            k--;
        }
        k=temp;
    }
    int cs=0,ms=0;
    for(int i=0;i<n*k;i++)
    {
        cs+=a[i];
        ms=max(cs,ms);
        if(cs<0) cs=0;
    }
    cout<<ms<<endl;
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