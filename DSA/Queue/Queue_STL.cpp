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
     queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);
     while(!q.empty())
     {
         cout<<q.front()<<" ";
         q.pop();
     }
     return 0;
}