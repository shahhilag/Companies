#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> nextGreaterElement(vector<int> v){
    int n = v.size();
    vector<int> arr1(n, 0);
    stack<int> s;
 
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= v[i])
            s.pop();
 
        if (s.empty())
        {
            arr1[i] = -1; 
        }       
        else
        {
            arr1[i] = s.top();   
        }        
        s.push(v[i]);
    }
        
    return arr1;
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