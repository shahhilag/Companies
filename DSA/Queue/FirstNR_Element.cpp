#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<char> firstnonrepeating(vector<char> str)
{
    vector<int> counter(26,0);
    vector<char> ans;
    queue<char> q;
    for(int i=0;i<str.size();i++)
    {
        q.push(str[i]);
        counter[str[i]-'a']++;
        while(!q.empty())
        {
            if(counter[q.front()-'a']>1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty())
        {
            ans.push_back('0');
        }
    }
    return ans;
}


int main()
{
     dfile();
     int n;
     cin>>n;
     vector<char> str;
     for(int i=0;i<n;i++)
     {
         char data;
         cin>>data;
         str.push_back(data);
     }
     cout<<endl;
     vector<char> ans=firstnonrepeating(str);
     for(int i=0;i<n;i++)
     {
         cout<<ans[i]<<" ";
     }
     return 0;
}