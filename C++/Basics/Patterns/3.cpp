#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            k--;
            if(k==n)
            {
                continue;
            }
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}