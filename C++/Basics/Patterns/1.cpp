#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"1";
        if(i==1)
        {
            cout<<"\n";
        }
        else if(i%2==0)
        {
            for(int j=2;j<=i-1;j++)
            {
                cout<<"0";
            }
            cout<<"1"<<"\n";
        }
        else
        {
            for(int k=2;k<=i;k++)
            {
                cout<<"1";
            }
            cout<<"\n";
        }
    }
    return 0;
}