#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

queue<int> interLeave(queue<int> q)
{
     int n=q.size();
     queue<int> q1;
     queue<int> q2;
     queue<int> ans;
     int mid=n/2;
     for(int i=0;i<mid;i++)
     {
          q1.push(q.front());
          q.pop();
     }
     for(int i=mid;i<n;i++)
     {
          q2.push(q.front());
          q.pop();
     }
     while(!q1.empty() and !q2.empty())
     {
          ans.push(q1.front());
          q1.pop();
          ans.push(q2.front());
          q2.pop();
     }
     return ans;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     queue<int> q;
     for(int i=0;i<n;i++)
     {
          int data;
          cin>>data;
          q.push(data);
     }
     queue<int> ans=interLeave(q);
     while(!ans.empty())
     {
          cout<<ans.front()<<" ";
          ans.pop();
     }
     return 0;
}