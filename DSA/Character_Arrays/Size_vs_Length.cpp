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
     char a[]="abcdef";
     cout<<strlen(a)<<endl;//'\0' not counted
     cout<<sizeof(a)<<endl;//'\0' counted
     return 0;
}