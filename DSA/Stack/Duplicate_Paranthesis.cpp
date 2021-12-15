#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
}

bool duplicateParentheses(string str){
    
    stack<char> s;
  
    for (char ch : str)
    {
        if (ch == ')')
        {
           if(s.top()=='(')
           {
               return true;
           }
           else
           {
               while(s.top()!='(')
               {
                   s.pop();
               }
               s.pop();//For removing '('
           }
        }
        else
            s.push(ch);
    }
    return false;    
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