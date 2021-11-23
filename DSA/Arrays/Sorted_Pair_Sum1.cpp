#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

pair<int, int> closestSum(vector<int> arr, int x){
    int closest_sum_one=0;
    int closest_sum_two=0;
    int closest_sum=0;
    pair<int,int> ans;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<arr.size();j++)
        {
            if(arr[i]+arr[j]<x and arr[i]+arr[j]>closest_sum)
            {
                closest_sum=arr[i]+arr[j];
                closest_sum_one=arr[i];
                closest_sum_two=arr[j];
            }
        }
    }
    ans=make_pair(closest_sum_one,closest_sum_two);
    return ans;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> arr;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         arr.push_back(a[i]);
     }
     sort(arr.begin(),arr.end());
     int x;
     cin>>x;
     pair<int,int> p = closestSum(arr,x);
     cout<<p.first<<" and "<<p.second<<endl;
     return 0;
}