#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
     }
     int mini=*min_element(v.begin(),v.end());//return iterator thus using *
     cout<<mini<<endl;
     int maxi=*max_element(v.begin(),v.end());
     cout<<maxi<<endl;
     int sum=accumulate(v.begin(),v.end(),0);
     cout<<sum<<endl;
     int ct=count(v.begin(),v.end(),6);
     cout<<ct<<endl;
     auto it=find(v.begin(),v.end(),10);
     if(it!=v.end())
     {
         cout<<*it<<endl;
     }
     else 
     {
         cout<<"Element not found"<<endl;
     }
     reverse(v.begin(),v.end());
     for(auto &value:v)
     {
         cout<<value<<endl;
     }
     return 0;
}