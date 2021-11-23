#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int fastPowerOptimise(int a,int n)
{
    //Base Case
    if(n==0)
    {
        return 1;
    }
    //Rec Case
    int fastPowerOptimiseSq=fastPowerOptimise(a,n/2)*fastPowerOptimise(a,n/2);
    if(n&1)
    {
        return a*fastPowerOptimiseSq;
    }
    else
    {
        return fastPowerOptimiseSq;
    }
}

int main()
{
     dfile();
     int a,n;
     cin>>a>>n;
     cout<<fastPowerOptimise(a,n)<<endl;   
     return 0;
}