#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int countBitsHack(int n)
{
    int ans=0;
    while(n>0)
    {
        n=n&(n-1);//Removes the last set bit from the number
        ans++;
    }
    return ans;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     cout<<countBitsHack(n)<<endl;
     return 0;
}