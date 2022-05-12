#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int fibonacci(int n)
{
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}