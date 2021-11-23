#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool isPalindrome(string str)
{
    string str1;
    str1=str;
    reverse(str.begin(),str.end());
    if(str==str1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
     dfile();
     string a;
     cin>>a;
     cout<<isPalindrome(a);
     return 0;
}