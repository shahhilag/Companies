#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     int x=10;
     cout<<&x<<endl;
     int * xptr=&x;
     cout<<xptr<<endl;
     int ** xptr1=&xptr;
     cout<<xptr1;
     return 0;
}