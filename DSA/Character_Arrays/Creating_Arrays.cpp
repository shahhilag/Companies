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
     //Without '\0' alongwith the string garbage will also be output
     //char a[]={'a','b','c','d','e'};
     char a[]={'a','b','c','d','e','\0'};
     char b[]="abcd";
     cout<<a<<endl;
     cout<<b<<endl;
     return 0;
}