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
     char a[1000]="apple";
     char b[1000];
     //String Length
     cout<<strlen(a)<<endl;
     //String Copy
     strcpy(b,a);
     cout<<b<<endl;
     //String Compare
     cout<<strcmp(b,a)<<endl;
     //String Concatenation
     char web[]="www.";
     char domain[]="codingminutes.com";
     cout<<strcat(web,domain)<<endl;
     //String copy+concatenation
     char c[1000];
     strcpy(c,strcat(web,domain));
     cout<<c<<endl;
     cout<<strcmp(a,c)<<endl;
     return 0;
}