#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int friendsPairing(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    int op1=friendsPairing(n-1);//If A goes alone
    int op2=(n-1)*friendsPairing(n-2);//If A goes with partner  
    return op1+op2;  
}

int main()
{
     dfile();
     int n;
     cin>>n;
     cout<<friendsPairing(n);
     return 0;
}