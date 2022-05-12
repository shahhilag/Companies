//Problem Link - https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381870?leftPanelTab=0

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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cs=0;
    int ms=0;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        ms=max(ms,cs);
        if(cs<0) cs=0;
    }
    cout<<ms<<endl;
}

int main()
{
    dfile();
    solve();
    return 0;
}