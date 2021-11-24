#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void solve(int a[],int n)
{
    vector<int> temp(n,0);
    for(int i=0;i<n;i++)
    {
        temp[a[i]]++;
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        // if(temp[i]>1)
        // {
        //     cout<<i<<" ";
        //     counter++;
        // }
        cout<<temp[i]<<" ";
    }
    // if(counter==0)
    // {
    //     cout<<"-1"<<endl;
    // }
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     solve(a,n);
     return 0;
}