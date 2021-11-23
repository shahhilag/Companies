#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void onetoNdecreasing(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    onetoNdecreasing(n-1);
}

int main()
{
     dfile();
     int n;
     cin>>n;
     onetoNdecreasing(n);
     return 0;
}