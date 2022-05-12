#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void reverse_array(int l,int r,int arr[])
{
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverse_array(l+1,r-1,arr);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    reverse_array(0,n-1,a);
    for(int x:a)
    {
        cout<<x<<" ";
    }
    return 0;
}