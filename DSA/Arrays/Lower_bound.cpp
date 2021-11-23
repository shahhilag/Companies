#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int lowerBound(vector<int> A,int Val)
{
    int nearest_smallest=-1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<=Val)
        {
            nearest_smallest=A[i];
        }
        else
        {
            break;
        }
    }
    return nearest_smallest;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int a[n];
     vector<int> A;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         A.push_back(a[i]);
     }
     sort(A.begin(),A.end());
     int Val=0;
     cin>>Val;
     cout<<lowerBound(A,Val)<<endl;
     return 0;
}