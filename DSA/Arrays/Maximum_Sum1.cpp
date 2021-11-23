#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int maximumSum1(int a[],int n)
{
    int largestSum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {      
            int currentSum=0;
            for(int k=i;k<=j;k++)
            {
                currentSum+=a[k];
            }
            largestSum=max(largestSum,currentSum);
        }
    }
    return largestSum;
}

int main()
{
     dfile();
     int a[]={-2,-3,4,-1,5,-12,6,1,3};
     int n=sizeof(a)/sizeof(int);
     cout<<maximumSum1(a,n)<<endl;
     return 0;
}