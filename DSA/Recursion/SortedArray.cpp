#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int isSorted(int a[],int n)
{
    //Base Case
    if(n==1 or n==0)
    {
        return true;
    }
    //Rec Case
    if(a[0]<a[1] and isSorted(a+1,n-1))//AND only true if both are true
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
     cout<<isSorted(a,n);
     return 0;
}