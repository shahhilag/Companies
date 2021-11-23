#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> repeating(vector<int> v)
{
    vector<int> ans;
    int n=v.size();
    int res=v[0];
    for(int i=1;i<n;i++)
    {
        res^=v[i];
    }
    int right_bit=(res & ~(res-1));//Trick to find rightmost set bit.
    int x=0;
    int y=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]&right_bit)
        {
            x=x^v[i];//Odd
        }
        else
        {
            y=y^v[i];//Even
        }
    }
    ans.push_back(x);
    ans.push_back(y);
    return ans;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         v.push_back(x);
     }
     vector<int> ans = repeating(v);
     for(int x:ans)
     {
         cout<<x<<" ";
     }
     cout<<endl;
     return 0;
}