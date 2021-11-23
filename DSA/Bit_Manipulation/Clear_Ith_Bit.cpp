#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void clearIthBit(int &n,int i)
{
    int mask=~(1<<i);
    n=(n & mask);
}

int main()
{
     dfile();
     int n=5;
     int i;
     cin>>i;
     clearIthBit(n,i);
     cout<<n<<endl;
     return 0;
}