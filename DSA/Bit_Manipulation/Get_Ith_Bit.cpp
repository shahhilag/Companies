#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int getIthBit(int n,int i)
{
    int mask=(1<<i);
    return ((n & mask)>0?1:0);
}

int main()
{
     dfile();
     int n=5;
     int i;
     cin>>i;
     cout<<getIthBit(n,i)<<endl;
     return 0;
}