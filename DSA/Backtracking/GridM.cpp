#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int fact(int n)
{
    //Base Case
    if(n==0)
    {
        return 1;
    }
    //Rec Case
    return n*fact(n-1);
}

int main()
{
     dfile();
     int m;
     int n;
     cin>>m>>n;
     cout<<(fact(m+n-2)/(fact(m-1)*fact(n-1)))<<endl;
     return 0;
}