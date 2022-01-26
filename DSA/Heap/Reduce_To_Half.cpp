#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int minSetSize(vector<int> &arr)
{
    int n=arr.size();
    priority_queue<int> q;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto x:mpp)
    {
        q.push(x.second);
    }   
    int sum=0;
    int cnt=0;
    while(n-sum>n/2)
    {
        sum+=q.top();
        q.pop();
        cnt++;
    }
    return cnt;
}

int main()
{
    dfile();
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        arr.push_back(data);
    }
    cout<<minSetSize(arr)<<endl;
    return 0;
}