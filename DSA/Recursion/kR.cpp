#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector <int> kRotate(vector<int> a, int k)
{
    int i=0;
    while(k--)
    {
        a.push_back(a[i]);
        i++;
    }
    i=0;
   return a;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> a;
     vector<int> p;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         a.push_back(arr[i]);
     }
     int k;
     cin>>k;
     p=kRotate(a,k);
     for(int i=k;i<n+k;i++)
     {
         cout<<p[i]<<" ";
     }  
     return 0;
}