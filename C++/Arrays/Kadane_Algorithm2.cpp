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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cs=0,ms=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ones=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1) ones++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1) a[i]=-1;
            if(a[i]==0) a[i]=1;
        }
        for(int i=0;i<n;i++)
        {
            cs+=a[i];
            ms=max(cs,ms);
            if(cs<0) cs=0;   
        }
        cout<<ms+ones<<endl;
    }
    return 0;
}