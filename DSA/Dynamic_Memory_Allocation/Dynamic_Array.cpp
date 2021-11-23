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
     int *arr=new int[n];
     cout<<arr<<endl;
     for(int i=0;i<n;i++)
     {
         arr[i]=i;
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     delete [] arr;
     cout<<arr<<endl;
     return 0;
}