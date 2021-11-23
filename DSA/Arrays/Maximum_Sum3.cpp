#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int maximumSum3(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            break;
        }
        else if(a[i]<0 and i!=n)
        {
            continue;
        }
        else if(a[i]<0 and i==n)
        {
            return -1;
        }
    }
    int current_sum=0;
    int maximum_sum=0;
    for(int i=0;i<n;i++)
    {
        current_sum+=a[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        maximum_sum=max(maximum_sum,current_sum);
    }
    return maximum_sum;
}

int main()
{
     dfile();
     int a[]={-2,-3,4,-1,5,-12,6,1,3};
     int n=sizeof(a)/sizeof(int);
     cout<<maximumSum3(a,n);
     return 0;
}