#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> sortingWithComparator(vector<int> a, bool flag){
    for(int i=1;i<a.size();i++)
    {
        if(flag==1)
        {
            for(int j=0;j<=a.size()-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                }
            }    
        }   
        else if(flag==0)
        {
            for(int j=0;j<=a.size()-i-1;j++)
            {
                if(a[j]<a[j+1])
                {
                    swap(a[j],a[j+1]);
                }
            }    
        }   
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