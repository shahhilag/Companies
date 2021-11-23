#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> optimizedBubbleSort(vector<int> v)
{
    for(int i=1;i<v.size();i++)
    {
        int swapped=0;
        for(int j=0;j<=v.size()-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            break;
        }
    }
    return v;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> v;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         v.push_back(a[i]);
     }   
     optimizedBubbleSort(v);
     for(int i=0;i<n;i++)
     {
         cout<<v[i]<<" ";
     }   
     return 0;
}