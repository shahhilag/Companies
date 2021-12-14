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
     stack<string> s;
     s.push("C++");
     s.push("Java");
     s.push("Python");
     s.push("OS");
     while(!s.empty())
     {
         cout<<s.top()<<endl;
         s.pop();
     }
     return 0;
}