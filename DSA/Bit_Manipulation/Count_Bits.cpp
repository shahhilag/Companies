#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int countBits(int n)
{
    int counter=0;
    while(n>0)
    {
        counter+=(n&1);//Last Bit
        n=n>>1;
    }
    return counter;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     cout<<countBits(n)<<endl;    
     return 0;
}