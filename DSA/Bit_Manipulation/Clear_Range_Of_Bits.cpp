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

int main()
{
     dfile();
     int n=31;
     int i=1;
     int j=3;
     clearBitsInRange(n,i,j);
     cout<<n<<endl;
     return 0;
}