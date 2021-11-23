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
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int res=0;
     int i=0;
     while(i<n)
     {
         res^=a[i];
         i++;
     }
     cout<<res<<endl;
     return 0;
}