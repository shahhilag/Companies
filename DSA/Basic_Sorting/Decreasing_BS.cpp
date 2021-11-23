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

void decrease_bs(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(compare(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
     dfile();
     int arr[]={-2,3,4,-1,5,-12,6,1,3};
     int n=sizeof(arr)/sizeof(int);
     decrease_bs(arr,n);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     return 0;
}