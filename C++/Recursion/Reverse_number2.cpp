#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void factorial(int n,int i,int a[])
{
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    return factorial(n,i+1,a); 
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int a[n];
    for(int  i=0;i<n;i++) cin>>a[i];
    factorial(n,0,a);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}