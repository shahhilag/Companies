#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void solve(int i,int n)
{
    if(i<1) return;
    cout<<i<<endl;
    solve(i-1,n);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    solve(n,n);
    return 0;
}