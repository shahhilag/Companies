#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int prev=i-1;
        while(prev>=0 and a[prev]>current)
        {
            a[prev+1]=a[prev];
            prev=prev-1;
        }
        a[prev+1]=current;
    }
}

int main()
{
     dfile();
     int a[]={-2,3,4,-1,5,-12,6,1,3};
     int n=sizeof(a)/sizeof(int);
     insertion_sort(a,n);
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     return 0;
}