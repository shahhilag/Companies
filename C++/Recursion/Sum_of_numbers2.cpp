//Functional approach
#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int summation(int n)
{
    if(n==0) return 0;
    return n+summation(n-1);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    cout<<summation(n)<<endl;
    return 0;
}