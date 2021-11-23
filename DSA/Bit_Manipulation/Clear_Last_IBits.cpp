#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void clearLastIBits(int &n,int i)
{
    int mask=(-1<<i);
    n=n & mask;
}

int main()
{
     dfile();
     int n=15;
     int i=2;
     clearLastIBits(n,i);
     cout<<n<<endl;
     return 0;
}