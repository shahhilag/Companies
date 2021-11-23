#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int current=a[i];
        int min_element=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[min_element])
            {
                min_element=j;
            }
        }
        swap(a[i],a[min_element]);
    }
}

int main()
{
     dfile();
     int arr[]={-2,3,4,-1,5,-12,6,1,3};
     int n=sizeof(arr)/sizeof(n);
     selectionSort(arr,n);
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" "; 
     }
     return 0;
}