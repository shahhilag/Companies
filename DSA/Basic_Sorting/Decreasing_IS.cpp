#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool compare(int a, int b)
{
    return a<b;
}

void decreasing_is(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int prev=i-1;
        int current=a[i];
        while(prev>=0 and compare(a[prev],current))
        {
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=current;
    }
}

int main()
{
     dfile();
     int a[]={-2,3,4,-1,5,-12,6,1,3};
     int n=sizeof(a)/sizeof(int);
     decreasing_is(a,n);
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }   
     return 0;
}