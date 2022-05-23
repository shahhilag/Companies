#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int subsequencesum(int i,int sum,vector<int> b,int a[],int n,int count)
{
    if(i==n)
    {
        if(sum==count)
        {
            for(int i=0;i<b.size();i++) cout<<b.at(i)<<" ";
            cout<<endl;
            return 1;
        }
        return 0;
    }
    b.push_back(a[i]);
    int l = subsequencesum(i+1,sum,b,a,n,count+a[i]);
    b.pop_back();
    int r = subsequencesum(i+1,sum,b,a,n,count);
    return l + r;
}

int main()
{
    dfile();
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b;
    cout<<subsequencesum(0,sum,b,a,n,0)<<endl;
    return 0;
}