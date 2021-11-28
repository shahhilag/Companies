#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

set<vector<int>> s;
void helper(vector<int> &nums, vector<int> ans, int i)
{
    int n=nums.size();
    if(i == n){
        sort(ans.begin(), ans.end());
        s.insert(ans);
        return;
    }
    
    ans.push_back(nums[i]);
    helper(nums, ans, i+1);
    ans.pop_back();
    helper(nums, ans, i+1);
}
vector<vector<int>> uniqueSubsets(vector<int> nums){
    s.clear();
    vector<int> ans;
    helper(nums, ans, 0);
    vector<vector<int>> v;
    for(auto x : s)
    {
        v.push_back(x);
    } 
    return v;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i=0;i<n;i++)
     {
         cin>>nums[i];
     }
     vector<vector<int>> ans=uniqueSubsets(nums);
     for(int i=0;i<ans.size();i++)
     {
         for(int j=0;j<ans[i].size();j++)
         {
             cout<<ans[i][j]<<" ";
         }
         cout<<" ";
     }     
     return 0;
}