#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
    unordered_set<int> intersection1;
    vector<int> ans;
    for(int i=0;i<nums1.size();i++)
    {
        intersection1.insert(nums1[i]);
    }
    for(int i=0;i<nums2.size();i++)
    {
        if(intersection1.find(nums2[i])!=intersection1.end())
        {
            ans.push_back(nums2[i]);
            intersection1.erase(nums2[i]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    dfile();
    int m,n;
    cin>>m>>n;
    vector<int> nums1,nums2;
    for(int i=0;i<m;i++)
    {
        int data;
        cin>>data;
        nums1.push_back(data);
    }
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        nums2.push_back(data);
    }
    vector<int> ans=intersection(nums1,nums2);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}