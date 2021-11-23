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
    //  stack<int> s;
    //  s.push(2);
    //  s.push(3);
    //  s.push(4);
    //  s.push(5);
    //  while(!s.empty())
    //  {
    //      cout<<s.top()<<endl;
    //      s.pop();
    //  }
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
     return 0;
}