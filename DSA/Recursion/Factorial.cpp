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
    return fact(n-1)*n;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     cout<<fact(n)<<endl;
     return 0;
}