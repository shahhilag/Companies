#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int bestInsertPos(vector<int> arr, int n, int m)
{
    int idx=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            idx=i;
            flag=1;
        }
    }
	
    if(flag==1) return idx;
    else
    {
        for(int i=0;i<n;i++)
        {
            auto idx1=upper_bound(arr.begin(),arr.end(),m);
            return idx1-arr.begin();
        }
    }
	
}

int main()
{
    dfile();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<bestInsertPos(arr,n,m);
        cout<<endl;
    }
    return 0;
}