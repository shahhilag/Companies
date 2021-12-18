#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int sortDonouts(int a[],int n)
{
    sort(a,a+n);
    int segment=(n/4)-1;
    int dec=0;
    int ans=0;
    int start=segment+1;
    while(segment>=0)
    {
        int current=a[start-dec];
        ans+=current;
        dec++;
        start=start+4;
        segment--;
    }   
    return ans;
}

int main()
{
     dfile();
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int a[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        } 
        cout<<sortDonouts(a,n)<<endl;
     }
     return 0;
}