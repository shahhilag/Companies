#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int isSortedTwo(int a[],int i,int n)
{
    //Base Case
    if(i==n-1)
    {
        return true;    
    }
    //Rec Case
    if(a[i]<a[i+1] and isSortedTwo(a,i+1,n))
    {
        return true;
    }
    return false;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     cout<<isSortedTwo(a,0,n);
     return 0;
}