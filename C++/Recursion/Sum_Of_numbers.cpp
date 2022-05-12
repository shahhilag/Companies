//Parameterized approach

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void summation(int i,int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    } 
    summation(i-1,sum+i);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    summation(n,0);
    return 0;
}