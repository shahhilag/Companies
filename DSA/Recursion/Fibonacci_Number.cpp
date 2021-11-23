#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int fib(int n)
{
    //Base Case
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    //Rec Case
    return fib(n-1)+fib(n-2);
}

int main()
{
     dfile();
     int n;
     cin>>n;
     cout<<fib(n);
     return 0;
}