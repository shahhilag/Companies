#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int maximumSum2(int a[],int n)
{
    int prefix[100]={0};
    prefix[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+a[i];
    }
    int largestSum=0;
    for(int i=0;i<n;i++)
    {
        int currentSum=0;
        for(int j=i;j<n;j++)
        {
            currentSum=i>1?prefix[j]-prefix[i-1]:prefix[j];
        }
        largestSum=max(currentSum,largestSum);
    }
    return largestSum;
}

int main()
{
     dfile();
     int a[]={-2,-3,4,-1,5,-12,6,1,3};
     int n=sizeof(a)/sizeof(int);
     cout<<maximumSum2(a,n)<<endl;
     return 0;
}