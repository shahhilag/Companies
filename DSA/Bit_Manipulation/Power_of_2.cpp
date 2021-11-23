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
     if((n&(n-1))==0)
     {
         cout<<"Power of 2";
     }
     else
     {
         cout<<"Not a power of 2";
     }
     return 0;
}