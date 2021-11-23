#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> sortingWithComparator(vector<int> a, bool flag){
   
        if(flag==1)
        {
            sort(a.begin(),a.end());
        }   
        else if(flag==0)
        {
            sort(a.begin(),a.end(),greater<int>());
        }   
        return a;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int arr[n];
     vector<int> a;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         a.push_back(arr[i]);
     }
     bool flag;
     cin>>flag;
     vector<int> newarr=sortingWithComparator(a,flag);
     for(int i=0;i<newarr.size();i++)
     {
         cout<<newarr[i]<<" "; 
     }
     return 0;
}