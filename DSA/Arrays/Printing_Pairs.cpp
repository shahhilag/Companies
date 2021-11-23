#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void printPairs(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<a[i]<<" , "<<a[j];
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
     printPairs(a,n);       
     return 0;
}