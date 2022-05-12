#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void sumans(int i,int n,int sum)
{
    if(i>n)
    {
        cout<<sum<<endl;
        return;
    } 
    sum+=i;
    sumans(i+1,n,sum);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    sumans(1,n,0);
    return 0;
}