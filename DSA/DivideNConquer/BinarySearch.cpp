#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 
int helper(vector<int> v,int s,int e, int x)
{
  if(e>=s)
  {
    int m=(s+e)/2;  
    if(v[m]>x)
    {
        return helper(v,s,m-1,x);
    }
    else if(v[m]<x)
    {
        return helper(v,m+1,e,x);
    }
    else
    {
        return m;
    } 
  }
  return -1;
}

int binarySearch(vector<int> v, int x)
{
    int n=v.size();
    return helper(v,0,n-1,x);
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> v(n,0);
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
     }    
     int x;
     cin>>x;
     cout<<binarySearch(v,x)<<endl;
     return 0;
}