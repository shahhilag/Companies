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
    int sum_one=0,sum_two=arr.size()-1;
    int closest_sum=INT_MAX;
    pair<int,int> ans;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[sum_one]+arr[sum_two]>x)
        {
            sum_two--;
        }
        else
        {
            if(abs(arr[sum_one]+arr[sum_two]-x)<closest_sum)
            {
                closest_sum_one=sum_one;
                closest_sum_two=sum_two;
                closest_sum=abs(arr[sum_one]+arr[sum_two]-x);
            }
            sum_one++;
        }
    }
    ans=make_pair(arr[closest_sum_one],arr[closest_sum_two]);
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