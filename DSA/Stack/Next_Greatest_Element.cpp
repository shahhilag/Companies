#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> nextGreaterElement(vector<int> v)
{
    stack<int> s;
    vector<int> ans;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        s.push(-1);
        for(int j=i+1;j<n;j++)
        {
            if(v[i]<v[j])
            {
                s.pop();
                s.push(v[j]);
                break;
            }
        }
    }
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    } 
    reverse(ans.begin(),ans.end());
    return  ans;  
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
        int data;
        cin>>data;
        v.push_back(data);
     }
     vector<int> ans=nextGreaterElement(v);
     for(int i=0;i<n;i++)
     {
        cout<<ans[i]<<" ";
     }
     return 0;
}