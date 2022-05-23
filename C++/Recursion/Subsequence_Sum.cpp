#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void subsequencesum(int i,int sum,vector<int> b,int a[],int n,int count)
{
    if(i==n)
    {
        if(sum==count)
        {
            for(int i=0;i<b.size();i++) cout<<b.at(i)<<" ";
            cout<<endl;
        }
        return;
    }
    b.push_back(a[i]);
    subsequencesum(i+1,sum,b,a,n,count+a[i]);
    b.pop_back();
    subsequencesum(i+1,sum,b,a,n,count);
}

int main()
{
    dfile();
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b;
    subsequencesum(0,sum,b,a,n,0);
    return 0;
}