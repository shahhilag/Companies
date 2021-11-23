#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

string removeDuplicate(string s){
    set<char> s1;
    string ans;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        s1.insert(s[i]);
    }
    for(auto x:s1)
    {
        ans+=x;
    }
    return ans;
}

int main()
{
     dfile();
     string s;
     cin>>s;
     cout<<removeDuplicate(s);
     return 0;
}