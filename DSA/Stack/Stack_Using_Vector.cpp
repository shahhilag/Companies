#include<bits/stdc++.h>
#include "Stack_Using_Vector.h"
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     Stack<int> s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     while(!s.empty())
     {
         cout<<s.top()<<endl;
         s.pop();
     }
     return 0;
}