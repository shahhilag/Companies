#include<bits/stdc++.h>
#include"Queue.h"
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     Queue q(4);
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.pop();
     q.pop();
     q.push(5);
     q.push(2);
     while(!q.empty())
     {
         cout<<q.getFront()<<endl;
         q.pop();
     }
     return 0;
}