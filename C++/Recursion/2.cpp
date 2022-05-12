//Time Complexity--->O(N)
//Space Complexity--->O(N)

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void solve(int i,int n)
{
    if(i>n) return;
    cout<<i<<endl;
    solve(i+1,n);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    solve(1,n);
    return 0;
}