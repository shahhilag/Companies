#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void bubble_sort_rec(int a[],int n)
{
    //Base Case
    if(n==1)
    {
        return ;
    }
    //Rec Case
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort_rec(a,n-1);
}
void bubble_sort_rec2(int a[],int n,int j)
{
    //Base Case
    if(n==1 || n==0)
    {
        return ;
    }
    //Rec Case
    if(j==n-1)
    {
        bubble_sort_rec2(a,n-1,0);
        return;
    }
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    bubble_sort_rec2(a,n,j+1);
}

int main()
{
     dfile();
     int arr[]={-2,3,4,-1,5,-12,6,1,3};
     int n=sizeof(arr)/sizeof(int);
     bubble_sort_rec2(arr,n,0);
     for(int j=0;j<n;j++)
     {
         cout<<arr[j]<<" ";
     }
     return 0;
}