#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int pairSticks(vector<int> length, int D)
{
    int counter=0;
    sort(length.begin(),length.end());
    for(int i=0;i<length.size()-1;)
    {
        for(int j=i+1;j<length.size();j++)
        {
            if(length[j]-length[i]<=D and i!=j)
            {
                counter++;
                i=j+1;
            }
        }
    }
    return counter;  
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int a[n];
     vector<int> v;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         v.push_back(a[i]);
     }
     int d;
     cin>>d;
     cout<<pairSticks(v,d);
     return 0;
}