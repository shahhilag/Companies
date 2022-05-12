#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

bool check_palindrome(int n,int i,string s)
{
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return check_palindrome(n,i+1,s); 
}

int main()
{
    dfile();
    string s;
    cin>>s;
    cout<<check_palindrome(s.size(),0,s)<<endl;
    return 0;
}