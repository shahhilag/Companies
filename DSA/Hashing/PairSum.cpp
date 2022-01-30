#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void pairSum(vector<int> arr,int Sum)
{
    unordered_set<int> s;
    for(int i=0;i<arr.size();i++)
    {
        int x=Sum-arr[i];
        if(s.find(x)!=s.end())
        {
            cout<<x<<"-"<<arr[i]<<endl;
        }
        s.insert(arr[i]);
    }
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
    int k;
    cin>>k;
    pairSum(arr,k);
    return 0;
}