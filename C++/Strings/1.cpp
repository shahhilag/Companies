#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int minimumOperations(string &a, string &b)
{
    int n=a.size();
    int n1=b.size();
    if(n1!=n) return -1;
    int ans=0;
    for(int i=0;i<=n/2;i++)
    {
        int flag1=0;
        int flag2=0;
        if(a[i]==b[i])
        {
            if(i==n/2) break;
            if(a[n-i-1]!=b[n-i-1]) ans++,flag1=1;
        }
        else
        {
            ans++;
            if(i==n/2) break;
            flag2=1;
            if(a[n-i-1]!=b[n-i-1] and (b[i]!=b[n-i-1] and a[i]!=a[n-i-1])) ans++,flag2=2;
        }
        if(((a[i]==a[n-i-1] and b[i]==b[n-i-1])) or (a[i]==b[n-i-1] and b[i]==a[n-i-1]))
        {
            if(flag1==1 or flag2==1) ans-=1;
            else if(flag2==2) ans-=2;
        } 
    }
    return ans;
}

int main()
{
    dfile();
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<minimumOperations(a,b)<<endl;
    }
    return 0;
}