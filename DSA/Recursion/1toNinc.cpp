#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void inc(int n)
{
    //Base Case
    if(n==0)
    {
        return ;
    }
    //Rec Case
    inc(n-1);
    cout<<n<<" ";
}

int main()
{
     dfile();
     int n;
     cin>>n;
     inc(n);
     return 0;
}