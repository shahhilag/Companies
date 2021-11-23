#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int fastExpo(int a,int n)
{
    int ans=1;
    while(n>0)
    {
        int last_bit=(n&1);
        if(last_bit)
        {
            ans=ans*a;
        }
        a=a*a;
        n=n>>1;//Discard the last bit
    }
    return ans;
}

int main()
{
     dfile();
     int a,n;
     cin>>a>>n;
     cout<<fastExpo(a,n)<<endl;
     return 0;
}