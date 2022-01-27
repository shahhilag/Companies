#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

vector<int> kWeakestRows(vector<vector<int>>&mat,int k)
{
    vector<int> ans;
    int count;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> weak;
    for(int i=0;i<mat.size();i++)
    {
        count=0;
        for(int j=0;j<mat[i].size();j++)
        {
            if(mat[i][j]==1)
            {
                count++;
            }
        }
        weak.push(make_pair(count,i));
    }
    
    while(k>0)
    {
        pair<int,int> temp=weak.top();
        ans.push_back(temp.second);
        weak.pop();
        k--;
    }
    return ans;
}

int main()
{
    dfile();
    int m,n;
    cin>>m>>n;
    int k;
    cin>>k;
    vector<vector<int>> mat;
    for(int i=0;i<m;i++)
    {
        vector<int> minimat;
        for(int j=0;j<n;j++)
        {
            int data;
            cin>>data;
            minimat.push_back(data);
        }
        mat.push_back(minimat);
        
    }
    vector<int> ans=kWeakestRows(mat,k);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}