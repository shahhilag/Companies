#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void printSubarrays(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
     dfile();
     int a[]={10,20,30,40,50,60};
     int n=sizeof(a)/sizeof(n);
     printSubarrays(a,n);
     return 0;
}