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
    //  string s="hello world";
    //  string s("hello world");
     string s;
    //  getline(cin,s);
     getline(cin,s,'.');
    //  for(char ch:s)
    //  {
    //      cout<<ch<<" ";
    //  }
    for(int i=0;i<s.length();i++)
     {
         cout<<s[i]<<" ";
     }
     cout<<s<<endl;
     return 0;
}