#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void arrange(long long arr[], int n) 
{
    long long temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[temp[i]];
    }
    
}

int main()
{
     dfile();
     int n;
     cin>>n;
     long long arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     arrange(arr,n);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     return 0;
}