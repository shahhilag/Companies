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
     int x;
     cin>>x;
     if(x&1)
     {
         cout<<"Odd"<<endl;
     }
     else
     {
         cout<<"Even"<<endl;
     }
     return 0;
}