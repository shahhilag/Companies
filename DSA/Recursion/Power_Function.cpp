#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int power(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    return (a * power(a,n-1));
    
}

int main()
{
     dfile();
     int a;
     int n;
     cin>>a>>n;
     cout<<power(a,n);
     return 0;
}