//Backtracking
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
    if(i<1) return;
    solve(i-1,n);
    cout<<i<<endl;
}

int main()
{
    dfile();
    int n;
    cin>>n;
    solve(n,n);
    return 0;
}