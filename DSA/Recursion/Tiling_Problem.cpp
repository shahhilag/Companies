#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int tiles(int n,int m)
{
    //Base Case
    if(n<m)
    {
        return 1;
    }
    //Rec Case
    int op1=tiles(n-1,m);
    int op2=tiles(n-m,m);
    return(op1+op2);
}

int main()
{
     dfile();
     int n,m;
     cin>>n>>m;
     cout<<tiles(n,m);
     return 0;
}