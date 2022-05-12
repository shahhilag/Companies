#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int factorial(int n)
{
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}