#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void clearBitsInRange(int &n,int i,int j)
{
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=n & mask;
}

void replaceBits(int &n,int i,int j,int m)
{
    clearBitsInRange(n,i,j);
    int mask=m<<i;
    n=n|mask;
}

int main()
{
     dfile();
    int n=15;
    int i=1;
    int j=3;
    int m=2;
    replaceBits(n,i,j,m);
    cout<<n<<endl;
     return 0;
}