#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void permutation(vector<int> &nums)
{
    int pt=0;
    int n=nums.size()-1;
    for(int i=n;i>0;i--)
    {
        if(nums[i]>nums[i-1])
        {
            pt=i;
            break;
        }
    }
    if(pt==0)
    {
        sort(nums.begin(),nums.end());
    }
    else
    {
        int min=INT_MIN;
        int toswap=nums[pt-1];
        for(int j=pt;j<=n;j++)
        {
            if(nums[j]-toswap>0 and nums[j]-toswap<min)
            {
                swap(nums[j],nums[j-1]);
            }
        }
        sort(nums.begin()+pt,nums.end());

    }
}

int main()
{
     dfile();
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          vector<int> a;
          for(int i=0;i<n;i++)
          {
              int data;
              cin>>data;
              a.push_back(data);
          }
          permutation(a);
          for(int i=0;i<n;i++)
          {
              cout<<a[i];
          }
     }
     return 0;
}