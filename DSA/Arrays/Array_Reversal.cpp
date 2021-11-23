#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void reversearray(int a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(a[s],a[e]);
        s+=1;
        e-=1;
    }
}

int main()
{
     dfile();
     int a[]={10,20,30,45,60,80,90};
     int n=sizeof(a)/sizeof(int);
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
     reversearray(a,n);
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     return 0;
}