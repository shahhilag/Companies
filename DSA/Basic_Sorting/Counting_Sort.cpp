#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void countingSort(int a[],int n)
{
    int largest=-1;
    for(int i=0;i<n;i++)
    {
        largest=max(largest,a[i]);
    }
    vector<int> freq(largest+1,0);
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(freq[i]>0)
        {
            a[j]=i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
     dfile();
     int arr[]={88,97,10,12,15,1,5,6,12,5,8};
     int n=sizeof(arr)/sizeof(int);
     countingSort(arr,n);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     return 0;
}