#include<bits/stdc++.h>
#include "Stack_Using_LL.h"
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     Stack<char> s;
     s.push('h');
     s.push('e');
     s.push('l');
     s.push('l');
     s.push('o');
     while(!s.empty())
     {
         cout<<s.top()<<" ";
         s.pop();
     }      
     return 0;
}