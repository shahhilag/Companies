#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool duplicateParentheses(string str){
    stack<int> s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            s.push(1);
        }
        else if(str[i]==')')
        {
            s.pop();
        }
    }
    if(s.empty())
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
     string s;
     cin>>s;
     bool ans=duplicateParentheses(s);
     cout<<ans<<endl;
     return 0;
}