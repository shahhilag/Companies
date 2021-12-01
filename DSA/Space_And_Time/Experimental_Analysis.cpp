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
     vector<int> a(n,0);
     for(int i=0;i<n;i++)
     {
         a[i]=n-i;
     }
    
     auto start_time=clock();
     sort(a.begin(),a.end());
     auto end_time=clock();
     cout<<"Time taken(in ms):"<<end_time-start_time<<endl;//Calculates time
     return 0;
}