#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int convertToBinary(int n)
{
    int ans=0;
    int p=1;
    while(n>0)
    {
        int last_bit=(n&1);
        ans+=p*last_bit;
        p=p*10;
        n=n>>1;
    }
    return ans;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     cout<<convertToBinary(n);
     return 0;
}